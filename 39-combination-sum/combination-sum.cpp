class Solution {
    void fun(int i,vector<int> arr,int target,vector<vector<int>> &ans,vector<int> a)
    {
        if(i == arr.size())
        {
            if(target == 0)
            {
                ans.push_back(a);
            }
            return;
        }
        if(arr[i]<=target)
        {
            a.push_back(arr[i]);
            fun(i,arr,target-arr[i],ans,a);
            a.pop_back();
        }
        fun(i+1,arr,target,ans,a);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> a;
        fun(0,candidates,target,ans,a);
        return ans;
    }
};
// issue - 1) ans not passed by reference
// 2) double if condn wrong !