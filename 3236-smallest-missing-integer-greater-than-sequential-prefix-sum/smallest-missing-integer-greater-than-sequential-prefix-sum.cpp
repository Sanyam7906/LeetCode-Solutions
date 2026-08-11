class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];
        set<int> st(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i] == nums[i-1]+1)
            {
                sum+=nums[i];
            }
            else
            {
                break;
            }
        }
        // sum is longest rpefux sum
        // find missing ele >= sum
        for(int i=sum;;i++)
        {
            if(st.find(i)==st.end())
            {
                return i;
            }
        }
        return -1;
    }
};