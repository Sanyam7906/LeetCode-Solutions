class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        int n = s.size();
        int i = 0;
        while(i<n)
        {
            while(i<n && s[i]==' ')//ignore space
            {
                i++;
            }
            if(i>=n)
            {
                break;
            }
            string word = "";
            while(i<n && s[i]!=' ')
            {
                word+=s[i];
                i++;
            }
            words.push_back(word);
        }
        reverse(words.begin(),words.end());
        string ans = "";
        for(int i=0;i<words.size();i++)
        {
            ans+=words[i];
            if(i!=words.size()-1)
            {
                ans+=" ";
            }
        }
        return ans;
    }
    // above is with O(n) SC

    // wow ! approach , rev string , rev each word and remove extra spaces
    // reverse(s.begin(),s.end());
    // int n = s.size();
    // int i = 0, l = 0, r = 0;
    // // l is where to write next char
    // while(i<n)
    // {
    //     while(i<n && s[i]==' ')
    //     {
    //         i++;
    //     }
    //     if(i>=n)
    //     {
    //         break;
    //     }
    //     if(l!=0)// tells to add one space before every word except first
    //     {
    //         s[l]==' ';
    //         l++;
    //     }
    //     int start = l;
    //     while(i<n && s[i]!=' ')
    //     {
    //         s[l] == s[i];
    //         l++;
    //         i++;
    //         reverse(s.begin()+start,s.begin()+l);
    //     }
    // }
    // s.resize(l);
    // return s;
};