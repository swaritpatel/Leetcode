class Solution {
public:
    
    int f(int ind, vector<int>&arr, int target, vector<vector<int>>&dp){
        if(ind == -1){
            // if(target == 0 && arr[0] == 0) return 2;
            
            if(target == 0) return 1;
             
            else{
                return 0;
            }
            
        }
        
        // if(dp[ind][target] != -1) return dp[ind][target];

        int add = f(ind -1, arr, target + arr[ind], dp);
        int sub = f(ind -1, arr, target - arr[ind], dp);
        return  add+sub;
            
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {
        vector<vector<int>>dp(nums.size()+1, vector<int>(abs(target),-1));
        return f(nums.size()-1, nums, target,dp);
    }
};