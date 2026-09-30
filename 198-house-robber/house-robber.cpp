class Solution {
public:
    int n;
    int fun(vector<int>& a,int i,vector<int>& dp)
    {
        if(i==0)
        {
            return dp[i] = a[i];
        }
        if(i<0)
        {
            return 0;
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        int pick = a[i] + fun(a,i-2,dp);
        int notpick = fun(a,i-1,dp);
        return dp[i] = max(pick,notpick);
    }
    int rob(vector<int>& nums) {
        n = nums.size();
        vector<int> dp(n,-1);
        return fun(nums,n-1,dp);
    }
};