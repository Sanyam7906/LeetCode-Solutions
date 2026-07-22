class Solution {
    bool fun(vector<int> a,int mid,int days)
    {   
        int sum = 0;
        int count = 0;
        for(int i=0;i<a.size();i++)
        {
            if(sum+a[i]>mid)
            {
                count++;
                sum = a[i];
            }
            else
            {   
                sum+=a[i];
            }
        }


        return count+1<=days;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0;
        int maxi = INT_MIN;
        for(int i=0;i<weights.size();i++)
        {
            sum+=weights[i];
            maxi = max(maxi,weights[i]);
        }
        int l = maxi, h = sum;
        int soln = -1;
        while(l<=h)
        {
            int mid = (l+h)/2;
            if(fun(weights,mid,days))
            {
                soln = mid;
                h = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }
        return soln;
    }
};