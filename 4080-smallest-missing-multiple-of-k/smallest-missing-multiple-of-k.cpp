class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int count = 1;
        while(1)
        {
            if(mp.find(k*count)==mp.end())
            {
                return k*count;
            }
            count++;
        }
        return 0;
    }
};