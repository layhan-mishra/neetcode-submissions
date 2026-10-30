class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {

        if(intervals.empty())
            return {};
        
        vector<vector<int>> answers;
        sort(intervals.begin(), intervals.end());
        int i = 0;

        while(i < intervals.size())
        {
            if(answers.empty())
                answers.push_back(intervals[i]);
            else if(answers.back()[1] >= intervals[i][0])
            {
                answers.back()[0] = min(answers.back()[0], intervals[i][0]);
                answers.back()[1] = max(answers.back()[1], intervals[i][1]);
            }
            else
                answers.push_back(intervals[i]);

            i++;
        }
        return answers;
    }
};
