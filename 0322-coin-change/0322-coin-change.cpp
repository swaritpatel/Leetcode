class Solution {
public:
    
    int f(int ind, vector<int>&coin, vector<vector<int>>&dp, int target){
        if(ind == 0){
            if(target % coin[ind] == 0) return target/coin[ind];
            
              else return 1e9;
        }
        if(dp[ind][target] != -1) return dp[ind][target];
        int not_take = 0 + f(ind-1, coin, dp, target);
        int take = INT_MAX;
        if(coin[ind] <= target) take = 1 + f(ind, coin, dp, target-coin[ind]);
         return dp[ind][target] = min(take, not_take);
    }
    
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>>dp(n, vector<int>(amount+1, -1));
        int ans =  f(n-1, coins, dp, amount);
        if(ans >= 1e9) return -1;
        return ans;
    }
};

 