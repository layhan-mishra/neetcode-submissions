class Solution {
public:
    int findMin(vector<int> &nums) {
        int leftBound = 0;
        int rightBound = nums.size()-1;
        int min = 1001;

        while(leftBound <= rightBound)
        {
            int mid = leftBound + ((rightBound - leftBound)/2);

            if(nums[mid] < min)
                min = nums[mid];

            if(nums[mid] > nums[rightBound])
                leftBound = mid + 1;
            else 
                rightBound = mid - 1;
        }
        return min;
    }
};
