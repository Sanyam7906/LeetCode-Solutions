class Solution {
public:
    bool IsPal(string s,int i,int j)
    {
        while(i<=j)
        {
            if(s[i++]!=s[j--])
            {
                return false;
            }
        }
        return true;
    }
    void fun(int ind,string s,vector<string> &arr,vector<vector<string>> &ans)
    {
        if(ind == s.size())
        {
            ans.push_back(arr);
            return;
        }
        for(int i = ind;i<s.size();i++)
        {
            if(IsPal(s,ind,i))
            {
                arr.push_back(s.substr(ind,i-ind+1));
                fun(i+1,s,arr,ans);
                arr.pop_back();

            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> arr;
        fun(0,s,arr,ans);
        return ans;
    }
};