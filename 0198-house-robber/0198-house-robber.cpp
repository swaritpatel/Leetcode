class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,0);
        dp[0] = nums[0];
         
        int prev=nums[0],prev2 = 0,curr;
        
        for(int i = 1; i < n; i++){
            int pick = nums[i];
            if(i >1)
             pick += prev2; 
            int nonpick = 0 + prev;
            
            curr = max(pick,nonpick);
            prev2 = prev;
            prev = curr;
            
        }
        return prev;
    
        
        
    }
};