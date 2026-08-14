class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int i;
        for(i = nums.size()-2;i>=0;i--)
        {
            if(nums[i+1]<=nums[i])
            {
                break;
            }
        }
        return i+1;
    }
};