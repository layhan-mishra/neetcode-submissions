class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> numberTable;
        vector<int> pair;
        for(int i = 0; i <  numbers.size(); i++)
        {
            if (numberTable.find(target - numbers[i]) != numberTable.end())
            {
                pair.push_back(i+1);
                pair.push_back((numberTable[target-numbers[i]]) + 1);
                sort(pair.begin(), pair.end());
                return pair;
            }
            numberTable[numbers[i]] = i;
        }
        pair = {0, 0};
        return pair;
    }
};
