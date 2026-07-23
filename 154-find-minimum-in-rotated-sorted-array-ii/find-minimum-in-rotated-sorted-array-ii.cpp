class Solution {
public:
    int findMin(vector<int>& nums) {
        // since duplicates are allowed so avoid case where 
        // a[mid]=a[l]=a[h] causethen the cond for sorted half becomes true even if its not sorted !
        int l = 0, h = nums.size()-1;
        int mini = INT_MAX;
        while(l<=h)
        {
            int mid = (l+h)/2;
            if(nums[mid]==nums[l] && nums[mid]==nums[h])
            {
                mini = min(mini,nums[mid]);
                l++;
                h--;
                continue;
            }

            if(nums[mid]<=nums[h])//right half is sorted
            {
                mini = min(mini,nums[mid]);
                h = mid-1;
            }
            else //left half is sorted
            {
                mini = min(mini,nums[l]);
                l = mid+1;
            }
        }
        return mini;
    }
};