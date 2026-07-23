class Solution {
    int fun(vector<int> a,int mid)
    {
        int count = 1,last = 0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]+last<=mid)// mid is the sum
            {
                last+=a[i];
            }
            else
            {
                
                count++;//divide subarr
                last = a[i];
            }
        }
        return count;//number of div made
        // for some specific mid [largest sum for a subarray]
    }
public:
    int splitArray(vector<int>& nums, int k) {
        int l = *max_element(nums.begin(),nums.end());
        int h = accumulate(nums.begin(),nums.end(),0);
        while(l<=h)
        {
            int mid = (l+h)/2;
            if(fun(nums,mid)>k)//more dic than needed
            {
                l = mid+1;
            }
            else
            {
                h = mid-1;
            }
        }
        return l;
    }
};