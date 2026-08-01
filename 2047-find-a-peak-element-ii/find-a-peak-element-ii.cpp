class Solution {
int findmaxind(vector<vector<int>> mat,int n,int m,int mid)
{
    int maxi = -1;
    int ind = -1;
    for(int i=0;i<n;i++)
    {
        if(mat[i][mid]>maxi)
        {
            maxi = mat[i][mid];
            ind = i;
        }
    }
    return ind;
}
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int l = 0,h = m-1;
        while(l<=h)
        {
            int mid = (l+h)/2;
            int maxind = findmaxind(mat,n,m,mid);
            int left = mid>0 ? mat[maxind][mid-1] : -1;
            int right = mid<m-1 ? mat[maxind][mid+1] : -1;
            if(mat[maxind][mid]>left && mat[maxind][mid]>right)
            {
                return {maxind,mid};
            }
            else if(mat[maxind][mid]<right)
            {
                l = mid+1;
            }
            else
            {
                h = mid-1;
            }
        }
        return {-1,-1};
    }
};