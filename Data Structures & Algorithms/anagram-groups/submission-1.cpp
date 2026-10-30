class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> anagrams;
        unordered_map<string, vector<string>> strMap; 
        string temp = "";
        string sortedStr;

        for(int i = 0; i < strs.size(); i++)
        {
            temp = strs[i];
            sort(temp.begin(), temp.end());
            strMap[temp].push_back(strs[i]);
        }

        for(auto p:strMap)
            anagrams.push_back(p.second);

        return anagrams;
    }
};
