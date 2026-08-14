class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int> a;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]>=0)
            {
                a.push_back(nums[i]);
            }
        }
        // rotate
        if(a.size()==0)
        {
            return nums;
        }
        k%=a.size();
        rotate(a.begin(),a.begin()+k,a.end());
        int j = 0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>=0)
            {
                nums[i] = a[j];
                j++;
            }
        }
        return nums;
    }
};