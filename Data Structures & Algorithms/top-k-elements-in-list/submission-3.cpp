class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    vector<int> answers;  
        for(int h = k; h > 0; h--)
        {
            vector<int> uniqueNums;
            bool matchFound = false;
            int tracker = 0;
            int highest = -1001;
            int mode;
            for(int i = 0; i< nums.size(); i++)
            {
                matchFound = false;
                tracker = 0;
                uniqueNums.push_back(nums[i]);
                for(int j =i+1; j<nums.size(); j++)
                {
                    if (nums[j] == nums[i])
                    {
                        tracker++;
                        matchFound = true;
                    }
                }
                if(matchFound)
                    uniqueNums.pop_back();
                if(tracker > highest)
                {
                    highest = tracker;
                    mode = nums[i];
                }
            }
            answers.push_back(mode);
            for(int i = 0; i < nums.size(); i++)
            {
                if(nums[i] == mode)
                {
                    nums.erase(nums.begin() + i);
                    i--;
                }

            }
        }
        return answers;
    }
};
