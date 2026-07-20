class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0,h = nums.size()-1;
        // check for the sorted part and update min with its min and remove the sorted half
        int mini = INT_MAX;
        while(l<=h)
        {
            int mid = (l+h)/2;
            if(nums[l]<=nums[mid])
            {
                mini = min(mini,nums[l]);
                l = mid+1;
            }
            else
            {
                mini = min(mini,nums[mid]);
                h = mid-1;
            }

        }
        return mini;
    }
};