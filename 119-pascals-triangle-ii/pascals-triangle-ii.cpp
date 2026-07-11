class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n = rowIndex;
        long long ans = 1;
        vector<int> ansrow;
        ansrow.push_back(ans);
        for(int i=1;i<=n;i++)
        {
            ans *= (n-(i-1));
            ans/= i;
            ansrow.push_back(ans);
        }
        return ansrow;
    }
};