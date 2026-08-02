class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long maxi = -1;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                long long val = (__gcd(nums[i],nums[j]));
                maxi = max((long long)maxi,((long long)nums[i]*(long long)nums[j])/(long long)(val*val));
            }
        }
        return maxi;
    }
};