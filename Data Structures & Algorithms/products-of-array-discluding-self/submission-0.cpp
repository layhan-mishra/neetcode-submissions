class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int sum = 1;
        int zeroCount = 0;
        for(int i = 0; i< nums.size(); i++)
        {
            if(nums[i] != 0 || zeroCount != 0)
            {
                sum *= nums[i];
            }
            else if(nums[i] == 0)
                zeroCount++;
        }
        for(int j = 0; j < nums.size(); j++)
        {
            if(nums[j] != 0 && zeroCount >= 1)
            {
                ans.push_back(0);
            }
            else if(nums[j] != 0)
            {
                ans.push_back(sum / nums[j]);
            }
            else
            {
                ans.push_back(sum);
            }
        }
        return ans;
    }
};
