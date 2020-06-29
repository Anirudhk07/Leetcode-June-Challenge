class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>paths(n,vector<int>(m));
        for(int i  = 0 ; i <n;i++)
            paths[i][m-1]=1;
        for(int i  = 0 ;i<m;i++)
            paths[n-1][i]=1;
        for(int r = n-2;r>=0;r--)
        {
            for(int c = m-2;c>=0;c--)
            {
                paths[r][c] = paths[r][c+1] + paths[r+1][c];
            }
        }
        return paths[0][0];
    }
};
