class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> numOffsets;

        for(int i = 0; i < nums.size(); i++)
        {
            if(numOffsets.find(target - nums[i]) != numOffsets.end())
            {
                return {numOffsets[target - nums[i]], i};
            }
            else
            {
                numOffsets[nums[i]] = i;
            }
        }
        return {-1, -1};
    }
};
