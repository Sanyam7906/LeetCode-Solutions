class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int> mp;
        int i = 0,j = 0;
        int maxi = -1;
        while(i<s.size())
        {
            mp[s[i]]++;
            if(mp[s[i]]<=2)
            {
                maxi = max(maxi,i-j+1);
            }
            while(mp[s[i]]>2)
            {
                mp[s[j]]--;
                j++;
            }
            i++;
        }
        return maxi;
    }
};