class Solution {
public:
    bool isAnagram(string s, string t) {
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
