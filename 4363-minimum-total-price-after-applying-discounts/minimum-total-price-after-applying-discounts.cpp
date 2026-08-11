class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(),prices.end(),greater<int>());
        sort(discounts.begin(),discounts.end(),greater<int>());
        int i=0,j = 0;
        double sum = 0;
        while(i<prices.size())
        {
            if (j < discounts.size()) {
                sum += prices[i] * (100.0 - discounts[j]) / 100.0;
                j++;
            } else {
                sum += prices[i];
            }
            i++;
        }
        return sum;
    }
};