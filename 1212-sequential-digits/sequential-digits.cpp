class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        string s = "123456789";
        // window size
        for(int k = 2;k<=9;k++)
        {
            for(int i=0;i+k<=9;i++)
            {
                string t = s.substr(i,k);
                int num = stoi(t);

                if(num>=low && num<=high)
                {
                    ans.push_back(num);
                }
            }
        }
        return ans;
    }
};