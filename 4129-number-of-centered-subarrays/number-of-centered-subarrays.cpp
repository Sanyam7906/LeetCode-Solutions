class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        int count = 0;
        for(int i=0;i<nums.size();i++)
        {
            unordered_map<int,int> mp;
            int sum = 0;
            for(int j=i;j<nums.size();j++)
            {
                mp[nums[j]]++;
                sum+=nums[j];
                if(mp.find(sum)!=mp.end())
                {
                    count++;
                }
            }
        }
        return count;
    }
};