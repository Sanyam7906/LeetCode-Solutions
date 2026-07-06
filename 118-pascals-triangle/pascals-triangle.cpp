class Solution {
    vector<int> row(int n)
    {
        int ans = 1;
        vector<int> ansrow;
        ansrow.push_back(ans);
        for(int i=1;i<n;i++)
        {
            ans *= (n-i);
            ans/= i;
            ansrow.push_back(ans);
        }
        return ansrow;

    }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> soln;
        for(int i=1;i<=numRows;i++)
        {
            soln.push_back(row(i));
        }
        return soln;

    }
};