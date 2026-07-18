class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //-1,1,2,3,4,0,5,7,-9,3,0,1,3,-4,5
        int pre = 1;
        int suff = 1;
        int maxi = INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(pre==0)
            {
                pre = 1;
            }
            if(suff==0)
            {
                suff = 1;
            }
            pre*=nums[i];
            suff*=nums[nums.size()-i-1];
            maxi = max(maxi,max(suff,pre));
        }
        return maxi;
    }
};