class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>> mp;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]].push_back(i);
        }
        int ans = 0;
        for(auto [it1,it2] : mp)
        {
            if(it2.size()<3)
            {
                continue;
            }

            int gap = it2[1] - it2[0];
            int flag = 1;

            for(int i=2;i<it2.size();i++)
            {
                if(it2[i]-it2[i-1]!=gap)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag)
            {
                ans++;
            }
        }
        return ans;
    }
};