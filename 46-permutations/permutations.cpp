class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        int num = 1;
        for(int i=1;i<=n;i++)
        {
            num*=i;
        }
        vector<vector<int>> ans;
        ans.push_back(nums);
        for(int i=1;i<num;i++)
        {
            next_permutation(nums.begin(),nums.end());
            ans.push_back(nums);
        }
        return ans;
    }
};