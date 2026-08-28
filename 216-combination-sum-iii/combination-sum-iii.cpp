class Solution {
public:
    void fun(int ind,int sum,int count,vector<int> &a,vector<int> &arr,vector<vector<int>> &ans,int n,int k)
    {
        // base case
        if(count == k)
        {
            if(sum == n)
            {
                ans.push_back(arr);
            }
            return;
        }
        if(ind == 9)
        {
            return;
        }
        arr.push_back(a[ind]);
        count++;
        sum+=a[ind];
        fun(ind+1,sum,count,a,arr,ans,n,k);
        arr.pop_back();
        count--;
        sum-=a[ind];
        fun(ind+1,sum,count,a,arr,ans,n,k);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> arr;
        vector<int> nums = {1,2,3,4,5,6,7,8,9};
        fun(0,0,0,nums,arr,ans,n,k);
        return ans;
    }
};