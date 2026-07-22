class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l = 1, h = *max_element(nums.begin(),nums.end());
        int soln = 0;
        while(l<=h)
        {
            int mid = (l+h)/2;
            long long sum = 0;
            for(int i=0;i<nums.size();i++)
            {
                sum+=ceil((double)nums[i]/(double)mid);
            }
            
            if(sum<=threshold)
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