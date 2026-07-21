class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
        {
            return 0;
        }
        if(nums[0]>nums[1])
        {
            return 0;
        }
        if(nums[n-2]<nums[n-1])
        {
            return n-1;
        }

        int l = 1;
        int h = n-2;
        while(l<=h)
        {
            int mid = (l+h)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])
            {
                return mid;
            }

            if(nums[mid-1]<nums[mid] || nums[mid]<nums[mid+1]) // increasing slope hence peak on right
            {
                l = mid+1;
            }
            else if(nums[mid-1]>nums[mid] || nums[mid]>nums[mid+1])
            {
                h = mid-1;
            }
        }
        return -1;
    }
};