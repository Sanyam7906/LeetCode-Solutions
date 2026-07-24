class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;
        int n = height.size();
        int i = 0;
        int j = n-1;
        while(i<j)
        {
            area = max(area,min(height[i],height[j])*(j-i));
            if(height[j]>height[i])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return area;
        
    }
};