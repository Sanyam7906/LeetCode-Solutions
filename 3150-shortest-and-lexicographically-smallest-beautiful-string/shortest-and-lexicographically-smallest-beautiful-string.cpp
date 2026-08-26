class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        // BF
        string ans = "";
        int mini = INT_MAX;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                string t = "";
                int count = 0;
                for(int j=i;j<s.size();j++)
                {
                    t+=s[j];
                    count+=(s[j]-'0');
                    if(count==k)
                    {
                        if(t.size()<mini)
                        {
                            mini = t.size();
                            ans = t;
                        }
                        else if(t.size() == mini)
                        {
                            ans = min(ans,t);
                            // check if lexiographically smallest
                        }
                    }

                }
            }
        }
        return ans;
    }
};