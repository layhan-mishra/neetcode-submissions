class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> solution;
        vector<string> group;
        for (int i = 0; i < strs.size(); i++)
        {
            if(strs[i] == "#")
                continue;
            group.push_back(strs[i]);
            for(int j = i+1; j < strs.size(); j++)
            {
                if(isAnagram(strs[i], strs[j]))
                {
                    group.push_back(strs[j]);
                    strs[j] = "#";
                }
            }
            solution.push_back(group);
            group.clear();
        }
        return solution;
    }
    bool isAnagram(string s, string t)
    {
    bool matchFound = false;
        if (s.size() == t.size())
        {
            for(int i = 0; i< s.size(); i++)
            {
                matchFound = false;
                for (int j = 0; j < t.size(); j++)
                {
                    if(s[i] == t[j])
                    {
                        matchFound = true;
                        t[j] = '#';
                        break;
                    }
                }
                if(!matchFound)
                    return false;
            }
            return true;
        }
        else 
            return false;
    }
};
