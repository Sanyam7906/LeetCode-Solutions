class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        // subarray with min sum of size n-k
        // sw with size n-k
        int i = 0, j = cardPoints.size()-k-1;
        int sum = 0;
        int total = 0;
        for(int r = 0;r<cardPoints.size();r++)
        {
            total+=cardPoints[r];
        }
        for(int r = i;r<=j;r++)
        {
            sum+=cardPoints[r];
        }
        if(k==cardPoints.size())
        {
            return total;
        }
        int mini = INT_MAX;
        while(j<cardPoints.size())
        {
            mini = min(mini,sum);
            j++;
            if(j<cardPoints.size())
            {
                sum+=cardPoints[j];
            }
            sum-=cardPoints[i];
            i++;
        }
        return total-mini;

    }
};