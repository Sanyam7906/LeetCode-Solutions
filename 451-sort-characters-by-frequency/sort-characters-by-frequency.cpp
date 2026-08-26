class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        vector<pair<int,char>> a;
        for(auto it : mp)
        {
            a.push_back({it.second,it.first});
        }
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        string ans = "";
        for(int i=0;i<a.size();i++)
        {
            for(int j=0;j<a[i].first;j++)
            {
                ans+=a[i].second;
            }
        }
        return ans;

    }
};