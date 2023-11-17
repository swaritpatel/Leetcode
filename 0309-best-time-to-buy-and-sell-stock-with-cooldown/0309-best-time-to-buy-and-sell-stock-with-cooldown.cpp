class Solution {
public:

    int dp[3][5005];

    int helper(vector<int> arr, int i, int flag){
        if(i==arr.size()) return 0;

        if(dp[flag][i]!=-1) return dp[flag][i];

        int ans = INT_MIN;

        if(flag==2){
            return dp[flag][i] = helper(arr,i+1,0);  // cooldown
        }
        else if(flag==1){
            ans = max(ans, helper(arr,i+1,2)+arr[i]); // sell;
            ans = max(ans,helper(arr,i+1,1)); // leave
        }else{
            ans = max(ans,helper(arr,i+1,1)-arr[i]); // buy
            ans = max(ans,helper(arr,i+1,0));  //leave
        }

        return dp[flag][i] = ans;
    }
    int maxProfit(vector<int>& arr) {
        memset(dp,-1,sizeof dp);
        return helper(arr,0,0);
    }
};
