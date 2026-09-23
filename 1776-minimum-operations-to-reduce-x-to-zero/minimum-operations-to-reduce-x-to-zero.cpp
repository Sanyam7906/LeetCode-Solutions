class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum = 0;
        int n = nums.size();
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        int val = sum - x;
        if(val<0)
        {
            return -1;
        }
        // max window with sum = val
        int l = 0;
        int r = 0;
        int sum1 = 0;
        int mini = INT_MAX;
        while(r<nums.size())
        {
            sum1+=nums[r];
            while(sum1>val)
            {
                sum1-=nums[l];
                l++;
            }
            if(sum1==val)
            {
                mini = min(mini,n-(r-l+1));
            }
            r++;
        }
        if(mini == INT_MAX)
        {
            return -1;
        }
        return mini;
    }
};