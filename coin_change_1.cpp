class Solution {
public:
    int change(int m, vector<int>& coins) {
        int n = coins.size();
        int a[n+1][m+1];
        
        for(int j = 0 ; j <=n;j++)
            a[j][0] = 1; //when my amount is 0
        
        //when I have no coints at all a[0][j]
        for(int i = 1;i<=m;i++)
            a[0][i] = 0;
        
        for(int i = 1 ; i <=n;i++)
        {
            for(int j = 1 ; j<=m;j++)
            {
                if(coins[i-1]>j)
                    a[i][j] = a[i-1][j];
                else
                    a[i][j] = a[i-1][j] + a[i][j-(coins[i-1])];
            }
        }
        return a[n][m];
    }
};