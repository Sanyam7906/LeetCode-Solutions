class Solution {
public:
    void fun(vector<string> &s,int n,int op,int cl,string t)
    {
        if(op == n && cl == n)
        {
            s.push_back(t);
            return;
        }

        if(op<n)
        {
            fun(s,n,op+1,cl,t+'(');
        }
        if(cl<op)
        {
            fun(s,n,op,cl+1,t+')');
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> s;
        fun(s,n,0,0,"");
        return s;
    }
};