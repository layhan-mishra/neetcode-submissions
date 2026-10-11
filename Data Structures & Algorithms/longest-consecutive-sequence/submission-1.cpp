class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numsSet;
        for(int i = 0; i < nums.size(); i++)
            numsSet.insert(nums[i]);

        int counter;
        int highStreak = 0;
        int currentNum;

        for(int i = 0; i< nums.size(); i++)
        {
            counter = 1;
            currentNum = nums[i];
            if(!(numsSet.contains(nums[i] - 1)))
            {
                while(numsSet.contains(currentNum + 1))
                {
                    counter++;
                    currentNum++;
                }
            }
            if(counter > highStreak)
            {
                highStreak = counter;
            }
        }
        return highStreak;
    }
};