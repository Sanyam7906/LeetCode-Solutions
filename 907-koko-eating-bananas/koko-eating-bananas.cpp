class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1,high = *max_element(piles.begin(),piles.end());
        int soln = 0;
        while(low<=high)
        {
            int mid = (low+high)/2;
            // mid is the speed
            long long ans = 0;
            for(int i=0;i<piles.size();i++)
            {
                ans+=ceil((double)piles[i]/(double)mid);
            }

            if(ans<=h)
            {
                soln = mid;
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return soln;
    }
};