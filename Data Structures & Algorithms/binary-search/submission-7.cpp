class Solution {
public:
    int search(vector<int>& nums, int target) {
        int leftBound = 0;
        int rightBound = nums.size()-1;
        int mid = nums.size()/2;
        
        while (leftBound<=rightBound)
        {
            if(nums[mid] < target)
                leftBound = mid+1;
            if(nums[mid] > target)
                rightBound = mid-1;
            if(nums[mid] == target)
                return mid;

            mid = (rightBound + leftBound) / 2;
        }
        return -1;
    }
};
