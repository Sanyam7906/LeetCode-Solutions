class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        int maxi = -1;
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            maxi = max(maxi,nums[i]);
            ans.push_back(__gcd(nums[i],maxi));
        }
        sort(ans.begin(),ans.end());
        int i = 0;
        int j = n-1;
        long long sum = 0;
        while(i<j)
        {
            sum+=__gcd(ans[i],ans[j]);
            i++;
            j--;
        }
        return sum;
    }
};