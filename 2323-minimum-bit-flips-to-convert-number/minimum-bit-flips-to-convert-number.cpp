class Solution {
public:
    int minBitFlips(int start, int goal) {
        // do xor
        int n = start^goal;
        //count set bits
        int count = 0;
        while(n!=0)
        {
            n = (n&(n-1));
            count++;
        }
        return count;
    }
};