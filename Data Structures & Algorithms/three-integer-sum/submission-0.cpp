class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>> triplets;

        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++)
        {
            if(i != 0 && nums[i-1] == nums[i])
                continue;

            unordered_map<int, int> numOffset;
            int target = nums[i] * -1;

            for(int j = i + 1; j < nums.size(); j++)
            {
                auto it = numOffset.find(target-nums[j]);
                if(it != numOffset.end())
                {
                    triplets.push_back({nums[i] , nums[j] , nums[numOffset[target-nums[j]]]});
                    while(j < nums.size()-1 && nums[j] == nums[j+1])
                        j++;
                }
                else
                    numOffset[nums[j]] = j;
            }
        }
        return triplets;
    }
};
