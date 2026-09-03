class Solution {
public:
    void fun(int ind,string digits,vector<string> &ans, string s , map<int,string> &mp)
    {
        if(ind == digits.size())
        {
            ans.push_back(s);
            return;
        }
        int digit = digits[ind]-'0';
        for(int i=0;i<mp[digit].size();i++)
        {
            s.push_back(mp[digit][i]);
            fun(ind+1,digits,ans,s,mp);
            s.pop_back();
        }
        
    } 
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string s = "";
        map<int,string> mp = {{2,"abc"},{3,"def"},{4,"ghi"},{5,"jkl"},{6,"mno"},{7,"pqrs"},{8,"tuv"},{9,"wxyz"}};
        fun(0,digits,ans,s,mp);
        return ans;
    }
};