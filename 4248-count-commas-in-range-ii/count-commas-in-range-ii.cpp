class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;
        // 1,000
        // 1,000,000
        for(long long i=1000;i<=n;i*=1000)
        {
            if(i>n)
            {
                break;
            }
            ans += (n-i+1);
        }
        return ans;
    }
};