class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pre = strs[0];
        for(int k=1;k<strs.size();k++)
        {
            int i = 0;
            while(i<strs[k].size() && i<pre.size() && strs[k][i]==pre[i])
            {
                // if(strs[k][i]!=pre[i])
                // {
                //     pre = pre.substr(0,i);
                //     break;
                // } this case becomes wrong for tc ab,a as a comes at last so it is ignore as pre does not get updtaed 
                i++;
            }
            pre = pre.substr(0,i);
            
        }
            return pre;
    }
};