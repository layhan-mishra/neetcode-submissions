class Solution {
public:
    int search(vector<int> &nums, int target) {
        int leftBound = 0;
        int rightBound = nums.size()-1;

        while(leftBound <= rightBound)
        {
            int mid = leftBound + ((rightBound - leftBound)/2);

            if(nums[mid] == target)
                return mid;

            
            if(nums[leftBound] <= nums[mid])
                if(nums[leftBound] <= target && target < nums[mid])
                    rightBound = mid - 1;
                else
                    leftBound = mid + 1;

            else
                if(nums[rightBound] >= target && target > nums[mid])
                    leftBound = mid + 1;
                else
                    rightBound = mid - 1;

        }
        return -1;
    }
};

