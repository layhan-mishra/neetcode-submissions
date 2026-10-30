class Solution {
public:
    int maxArea(vector<int>& heights) {
        int currentStart = 0;
        int currentEnd = heights.size() - 1;
        int max = 0;
        while(currentEnd > currentStart)
        {
            if((min(heights[currentStart], heights[currentEnd]) * (currentEnd - currentStart)) > max)
                max = min(heights[currentStart], heights[currentEnd]) * (currentEnd - currentStart);
            if(heights[currentStart] > heights[currentEnd])
                currentEnd--;
            else
                currentStart++;
        }
        return max;
    }
};
