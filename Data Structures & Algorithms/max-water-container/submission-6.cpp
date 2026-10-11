class Solution {
public:
    int maxArea(vector<int>& heights) {
        int currentStart = 0;
        int currentEnd = heights.size()-1;
        int currentFill = 0;
        int max = 0;

        while(currentStart != currentEnd)
        {
            currentFill = (currentEnd-currentStart) * min(heights[currentStart], heights[currentEnd]);
            if(currentFill > max)
                max = currentFill;
            if(heights[currentStart] == min(heights[currentStart], heights[currentEnd]))
                currentStart++;
            else
                currentEnd--;
        }

        return max;
    }
};
