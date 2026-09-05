class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        // generate a prefix array for max and suffix array for min
        int n = nums.size();
        vector<int> pre;
        pre.push_back(nums[0]);
        vector<int> suf;
        suf.push_back(nums[n-1]);
        for(int i=1;i<n;i++)
        {
            pre.push_back(max(pre.back(),nums[i]));
        }
        for(int i=n-2;i>=0;i--)
        {
            suf.push_back(min(suf.back(),nums[i]));
        }
        reverse(suf.begin(),suf.end());
        int ans = n+1;
        for(int i=0;i<n;i++)
        {
            // is stable
            int val = pre[i]-suf[i];
            if(val<=k)
            {
                ans = min(ans,i);
            }
        }
        if(ans == n+1)
        {
            return -1;
        }
        return ans;
    }
};