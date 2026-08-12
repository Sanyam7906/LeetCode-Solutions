class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int i=0,j = 0;
        unordered_map<int,int> mp;
        int maxi = -1;
        while(j<nums.size())
        {
            mp[nums[j]]++;
            while(mp[nums[j]]>k)
            {
                mp[nums[i]]--;
                i++;
            }
            maxi = max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};