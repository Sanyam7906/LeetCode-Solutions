class Solution {
    public:
    unordered_set<string> st;
    int n;
    int dp[301];
    int maxi;
    bool solve(int ind,string &s)
    {
        if(ind >= n) // not == as we adding l to ind
        {
            return true;
        }
        if(dp[ind]!=-1)
        {
            return dp[ind];
        }
        if(st.find(s)!=st.end())
        {
            return true;
        }
        
        for(int l=1;l<=maxi;l++)
        {
            string temp = s.substr(ind,l);
            if(st.find(temp)!=st.end() && solve(ind+l,s))
            {
                return dp[ind] = true;
            }
        }
        return dp[ind] = false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        // code here
        n = s.size();// can initialize n with the lenght of the biggest strng in dic
        maxi = -1;
        memset(dp,-1,sizeof(dp));
        for(string &word : wordDict)
        {
            st.insert(word);
            maxi = max(maxi,(int)word.size());
        }
        
        
        return solve(0,s);
    }
};