class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.size() == 0)
            return false;
        
        int height = matrix.size();
        int width = matrix[0].size();
        int mid = matrix[0].size()/2;
        int midRow = matrix.size()/2;

        int leftRowBound = 0;
        int rightRowBound = height - 1;
        int leftBound = 0; 
        int rightBound = width-1;

        int targetRow = -1;

        while(leftRowBound <= rightRowBound)
        {
            if(matrix[midRow][0]<=target)
            {
                targetRow = midRow;
                leftRowBound = midRow + 1;
            }
            else if(matrix[midRow][0] > target)
                rightRowBound = midRow - 1;

            midRow = leftRowBound + (rightRowBound - leftRowBound)/2;
        }

        if(targetRow == -1)
            return false;

        
        while(rightBound >= leftBound)
        {
            if(matrix[targetRow][mid] < target)
                leftBound = (mid) + 1;
            else if(matrix[targetRow][mid] > target)
                rightBound = (mid) - 1;
            else if(matrix[targetRow][mid] == target)
                return true;

            mid = leftBound + (rightBound - leftBound)/2;
        }

        return false;
    }
};
