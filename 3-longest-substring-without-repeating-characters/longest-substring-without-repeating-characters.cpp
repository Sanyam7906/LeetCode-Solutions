class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       // sliding window ; as soon as you find a repeating character shrink your string from start
       if(s == "")
       {
        return 0;
       }
       int i = 0,j = 0;
       unordered_map<char,int> mp;
       int maxi = -1;
       while(j<s.size())
       {
            mp[s[j]]++;
            while(mp[s[j]]>1)
            {
                mp[s[i]]--;
                i++;
            }
            maxi = max(maxi,j-i+1);
            j++;

       }
       return maxi;
    }
};