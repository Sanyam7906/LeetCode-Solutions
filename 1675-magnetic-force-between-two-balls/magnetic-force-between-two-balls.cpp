class Solution {
    bool fun(vector<int> a,int mid,int m)
    {
        int count = 1,last = a[0];
        for(int i=1;i<a.size();i++)
        {
            if(a[i]-last>=mid)
            {
                count++;
                last = a[i];
            }
            if(count>=m)
            {
                return true;
            }
        }
        return false;
    }
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n = position.size();
        int l = 1;
        int h = position[n-1]-position[0];
        while(l<=h)
        {
            int mid = (l+h)/2;
            if(fun(position,mid,m)==true)
            {
                l = mid+1;
            }
            else
            {
                h = mid-1;
            }
        }
        return h;
    }
};