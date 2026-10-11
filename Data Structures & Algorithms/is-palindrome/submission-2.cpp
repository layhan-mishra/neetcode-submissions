class Solution {
public:
    bool isPalindrome(string s) {
        string noSpaces;
        stack<char> letterStack;
        int skipChar = -1;
        for(int i = 0; i< s.size(); i++)
        {
            if(isalnum(s[i]))
            {
                noSpaces.push_back(tolower(s[i]));
            }
        }
        if(noSpaces.size()%2 == 1)
        {
            skipChar = noSpaces.size()/2;
        }
        for(int i = 0; i < noSpaces.size(); i++)
        {
            if(i < noSpaces.size()/2)
            {
                letterStack.push(noSpaces[i]);
            }
            else if(i == skipChar)
            {

            }
            else
            {
                char topElem = letterStack.top();
                if(topElem != noSpaces[i])
                    return false;
                letterStack.pop();
            }
        }
        return true;
    }
};
