class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == divisor)
        {
            return 1;
        }
        bool sign = true;
        if(dividend>=0 && divisor<0)
        {
            sign = false;
        }
        else if(dividend<0 && divisor>0)
        {
            sign = false;
        }
        long long n = abs((long long)dividend);
        long long d = abs((long long)divisor);
        long long ans = 0;//quotient
        while(n>=d)
        {
            int count = 0;
            while(n>=(d<<(count+1)))
            {
                count++;
            }
            ans+=(1LL<<count);
            n-=(d*(1LL<<count));
        }

        if(ans >= (1LL<<31) && sign==true)
        {
            return INT_MAX;
        }// use 1LL cause if not 1<<31 overflow which gives -ve value and the above cond gets correct and give output int_max
        if(ans>=(1LL<<31) && sign==false)
        {
            return INT_MIN;
        }
        if(sign)
        {
            return ans;
        }
        else
        {
            return -ans;
        }

    }
};