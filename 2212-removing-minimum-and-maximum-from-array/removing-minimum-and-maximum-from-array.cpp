class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int miniInd = 0;
        int maxiInd = 0;
        int n = nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<mini)
            {
                mini = nums[i];
                miniInd = i;
            }
            if(nums[i]>maxi)
            {
                maxi = nums[i];
                maxiInd = i;
            }
        }
        if(miniInd>maxiInd)
        {
            swap(miniInd,maxiInd);
        }
        int f1 = maxiInd + 1;
        int f2 = n - miniInd;
        int f3 = (miniInd+1)+(n-maxiInd);
        return min({f1,f2,f3});
    }
};