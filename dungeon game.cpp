class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& d) {
        int r  = d.size();
        int c = d[0].size();
        vector<vector<int>>sol(r,vector<int>(c));
        sol[r-1][c-1] = d[r-1][c-1]>0?1:1-d[r-1][c-1];
        
        for(int i  = r-2; i>=0;i--)
            sol[i][c-1] = max(sol[i+1][c-1]-d[i][c-1],1);
        for(int j  = c-2 ; j>=0;j--)
            sol[r-1][j] = max(sol[r-1][j+1]-d[r-1][j],1);
        for(int i  = r-2; i>=0;i--)
        {
            for(int j  = c-2 ; j>=0;j--)
            {
                sol[i][j] = max(min(sol[i+1][j],sol[i][j+1])-d[i][j],1);
                
            }
        }
        return sol[0][0];
        }
};