class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequencies;
        int temp;
        vector<int> answers;

        for(int i= 0; i < nums.size(); i++)
        {
            if(frequencies.find(nums[i]) != frequencies.end())
            {
                temp = frequencies[nums[i]];
                temp++;
                frequencies[nums[i]] = temp;
            }
            else
                frequencies[nums[i]] = 1;
        }
        while(k > 0)
        {
            pair<int, int> maxFreq = {0, 0};
            
            for(auto p: frequencies)
                if(p.second > maxFreq.second)
                    maxFreq = p;
            
            frequencies.erase(maxFreq.first);
            answers.push_back(maxFreq.first);
            k--;
        }
        return answers;
    }
};
