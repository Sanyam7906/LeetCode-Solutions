class Solution {
public:
    int maxDepth(string s) {
        // max value of count;
        int count = 0;
        int maxi = -1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                count++;
                maxi = max(maxi,count);
            }
            else if(s[i]==')')
            {
                count--;
            }
        }
        if(maxi == -1)
        {
            return 0;
        }
        return maxi;
    }
};