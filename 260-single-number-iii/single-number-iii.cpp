class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long xora = 0;
        for(int i=0;i<nums.size();i++)
        {
            xora^=nums[i];
        }
        int b1 = 0,b2 = 0;
        long long rm = (xora&(-xora));
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]&rm)
            {
                b1^=nums[i];
            }
            else
            {
                b2^=nums[i];
            }
        }
        return {b1,b2};
    }
};