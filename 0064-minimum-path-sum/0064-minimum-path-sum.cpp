class Solution {
public:
    
    int f(int i, int j, vector<vector<int>>& grid,vector<vector<int>>& dp){
        
        if(i == 0 && j == 0){
            return grid[0][0];
        }
        if(i < 0 || j < 0) return 1e9;
        if(dp[i][j] != -1) return dp[i][j];
        int left = grid[i][j] + f(i-1,j,grid,dp);
        int up = grid[i][j] + f(i,j-1,grid,dp);
        return dp[i][j] =  min(up,left);
    }
    
    int minPathSum(vector<vector<int>>& grid) {
       
     int i = grid[0].size();
    int j = grid.size();
         vector<vector<int>>dp(j,vector<int>(i,-1));
        return f(j-1,i-1,grid,dp);
    }
};