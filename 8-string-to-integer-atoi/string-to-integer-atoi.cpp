class Solution {
public:
    int fun(string &s,int i,int sign,long long ans)
    {
        if(i>=s.size() || s[i]<'0' || s[i]>'9')
        {
            return sign*ans;
        }

        int digit = s[i]-'0';

        // overflow conditon
        if(ans>(INT_MAX-digit)/10)
        {
            if(sign==1)
            {
                return INT_MAX;
            }
            return INT_MIN;
        }
        ans = ans*10 + digit;
        return fun(s,i+1,sign,ans);
    }
    int myAtoi(string s) {
        // recursive implemenation
        // skip - and + and ' '
        int i = 0;
        while(i<s.size() && s[i]==' ')
        {
            i++;
        }
        int sign = 1;
        if(i<s.size() && s[i]=='-')
        {
            sign = -1;
            i++;
        }
        else if(i<s.size() && s[i]=='+')
        {
            i++;
        }

        return fun(s,i,sign,0);
    }
};