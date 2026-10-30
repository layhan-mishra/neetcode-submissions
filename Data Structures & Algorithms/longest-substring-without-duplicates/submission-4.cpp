class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        unordered_map<char, int> strMap;
        int currentStart = 0;
        int length = 0;
        int longest = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(strMap.find(s[i]) != strMap.end() && currentStart <= strMap[s[i]])
            {
                currentStart = strMap[s[i]] + 1;
                length = i - currentStart + 1;
                strMap[s[i]] = i;
            }
            else
            {
                strMap[s[i]] = i;
                length++;
            }
            if(length > longest)
                longest = length;
        }
        return longest;
    }
};
