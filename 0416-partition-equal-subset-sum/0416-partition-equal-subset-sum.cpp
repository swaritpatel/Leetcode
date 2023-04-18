class Solution {
public:
    
    bool f(int ind, int sum, int target, vector<int>&nums, vector<vector<int>>&dp){
        if(ind == 0){
            if(target == sum) return true;
            else return false;
        }
        if(target == sum) return true;
        if(dp[ind][sum] != -1) return dp[ind][sum];
        bool not_take = f(ind-1, sum, target,nums,dp);
        bool take = f(ind-1, sum - nums[ind], target + nums[ind],nums, dp);
        
        return dp[ind][sum] = (not_take || take);
        
    }
    
    
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum+= nums[i];
        }
        vector<vector<int>>dp(nums.size()+1,vector<int>(sum+1,-1));
        return f(nums.size()-1,sum,0,nums,dp );
        // vector<vector<int>>dp(nums.size()+1, vector<int>(1001,-1));÷
    }
};