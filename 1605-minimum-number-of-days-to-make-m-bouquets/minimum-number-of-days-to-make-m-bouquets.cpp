class Solution {
    bool fun(int mid,vector<int>& nums,int m,int k)
    {
        int count = 0;
        int len = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<=mid)
            {
                len++;
            }
            else
            { 
                count+=(len/k);
                len = 0;
            }
        }
        count+=(len/k);
        return count>=m;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int l = *min_element(bloomDay.begin(),bloomDay.end());
        int h = *max_element(bloomDay.begin(),bloomDay.end());
        int soln = -1;
        if((long long)m*k>bloomDay.size())
        {
            return -1;
        }
        while(l<=h)
        {
            int mid = (l+h)/2;
            if(fun(mid,bloomDay,m,k))// if such is possible remove right side and move left
            {
                soln = mid;
                h = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }
        return soln;
    }
};