class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        // generate all subarrays O(n2)
        int count = 0;
        for(int i=0;i<nums.size();i++)
        {
            int x = 0;
            int y = 0;
            for(int j=i;j<nums.size();j++)
            {
                if(nums[j]&1)
                {
                    y++;
                }
                else
                {
                    x++;//even
                }

                if(y>0 && (x*b <= a*y))
                {
                    count++;
                }
            }
        }
        return count;
    }
};