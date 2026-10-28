class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        unordered_map<char, int> chars;
        int i = 0;
        int start = 0;
        int longest = 0;


        while(i < s.size())
        {
            auto it = chars.find(s[i]);
            if(it != chars.end())
            {
                if(chars[s[i]] >= start)
                    start = chars[s[i]] + 1;
            }

            chars[s[i]] = i;

            if(i - start + 1 > longest)
                    longest = i - start + 1;

            i++;
        }

        return longest;
    }
};
