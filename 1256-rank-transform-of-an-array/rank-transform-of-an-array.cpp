class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> cpy = arr;
        sort(cpy.begin(),cpy.end());

        unordered_map<int,int> mp;
        int rank = 1;
        vector<int> ans;
        
        for(int i = 0;i<cpy.size();i++)
        {
            if(mp.find(cpy[i])==mp.end())
            {
                mp[cpy[i]] = rank;
                rank++;
            }
        }

        for(int i=0;i<arr.size();i++)
        {
            ans.push_back(mp[arr[i]]);
        }
    return ans;
    }
};