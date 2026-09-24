class Solution {
public:
    bool check(int n,int i)
    {
        int sum = 0;
        while(n!=0)
        {
            int digit = n%10;
            sum+=digit;
            n/=10;
        }
        if(sum==i)
        {
            return true;
        }
        return false;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(check(nums[i],i))
            {
                return i;
            }
        }
        return -1;
    }
};