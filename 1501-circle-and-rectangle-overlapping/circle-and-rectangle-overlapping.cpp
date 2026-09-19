class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        // find the closest point of ciurcle to square
        int x = max(x1, min(xCenter, x2)) - xCenter;
        int y = max(y1, min(yCenter, y2)) - yCenter;

        return x * x + y * y <= radius * radius;

    }
};