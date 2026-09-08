class Solution {
public:
    int countCommas(int n) {
        // 100,000
        // 10,000
        //1,000
        int num = n - 999;
        if(num>=0)
        {
            return num;
        }
        return 0;
        
    }
};