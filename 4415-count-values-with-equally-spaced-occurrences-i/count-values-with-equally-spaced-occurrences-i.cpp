class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        int ans = 0;
        for(auto it : mp)
        {
            if(it.second!=3)
            {
                continue;
            }

            int curr = it.first;

            vector<int> pos;

            for(int i=0;i<n;i++)
            {
                if(nums[i]==curr)
                {
                    pos.push_back(i);
                }
            }

            if(pos[1]-pos[0] == pos[2]-pos[1])
            {
                ans++;
            }
        }
        return ans;
    }
};