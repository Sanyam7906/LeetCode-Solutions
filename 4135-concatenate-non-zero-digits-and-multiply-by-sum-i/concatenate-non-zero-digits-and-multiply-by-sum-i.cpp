class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x = 0;
        long long sum = 0;
        while(n!=0)
        {
            int digit = n%10;
            n/=10;
            if(digit)
            {
                x = x*10 + digit;
                sum+=digit;
            }
        }
        int rev = 0;
        while(x!=0)
        {
            int digit = x%10;
            x/=10;
            rev = rev*10 + digit;
        }
        return rev*sum;

    }
};