class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = (int)height.size() - 1;
        int leftMax = 0, rightMax = 0, total = 0;

        while (l < r) {
            leftMax = max(leftMax, height[l]);
            rightMax = max(rightMax, height[r]);

            if (leftMax < rightMax) {
                total += leftMax - height[l];
                l++;
            } else {
                total += rightMax - height[r];
                r--;
            }
        }
        return total;
    }
};