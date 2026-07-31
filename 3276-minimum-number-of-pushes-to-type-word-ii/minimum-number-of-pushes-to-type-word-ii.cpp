class Solution {
public:
    int minimumPushes(string word) {
        map<char,int> mp;
        for(int i=0;i<word.size();i++)
        {
            mp[word[i]]++;
        }
        vector<pair<int,char>> a;
        for(auto it : mp)
        {
            a.push_back({it.second,it.first});
        }
        sort(a.begin(),a.end(),greater<pair<int,char>>());
        int ans = 0;
        for(int i=0;i<a.size();i++)
        {
            int pushes = i/8 + 1;
            ans+=a[i].first*pushes;
        }
        return ans;
    }
};