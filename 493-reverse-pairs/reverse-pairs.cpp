class Solution {
    void merge(vector<int>& a,int low,int mid,int high)
    {
        vector<int> temp;
        int left = low;
        int right = mid+1;
        while(left<=mid && right<=high)
        {
            if(a[left]<=a[right])
            {
                temp.push_back(a[left]);
                left++;
            }
            else
            {
                temp.push_back(a[right]);
                right++;
            }
        }
        while(left<=mid)
        {
            temp.push_back(a[left]);
            left++;
        }
        while(right<=high)
        {
            temp.push_back(a[right]);
            right++;
        }
        for(int i=low;i<=high;i++)
        {
            a[i] = temp[i-low];
        }
    }
    int countpairs(vector<int>& a,int low,int mid,int high)
    {
        int right = mid+1;
        int count = 0;
        for(int i=low;i<=mid;i++)
        {
            while(right<=high && a[i]>a[right]*2LL)//overflow occurs
            {
                right++;
            }
            count+=(right-(mid+1));
        }
        return count;
    }
    int mergesort(vector<int>& a,int low,int high)
    {
        if(low>=high)
        {
            return 0;
        }
        int count = 0;
        int mid = (low+high)/2;
        count+=mergesort(a,low,mid);
        count+=mergesort(a,mid+1,high);
        count+=countpairs(a,low,mid,high);
        merge(a,low,mid,high);
        return count;
    }
public:
    int reversePairs(vector<int>& nums) {
        return mergesort(nums,0,nums.size()-1);
    }
};