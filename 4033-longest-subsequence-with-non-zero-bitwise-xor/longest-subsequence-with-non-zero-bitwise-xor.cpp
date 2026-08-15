class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int x = nums[0];
        long long sum = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            x^=nums[i];
            sum+=nums[i];
        }
        if(sum == 0)
        {
            return 0;
        }
        if(x==0)
        {
            return nums.size()-1;
        }
        return nums.size();

    }
};