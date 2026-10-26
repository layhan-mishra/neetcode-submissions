class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> parentheses;

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(')
                parentheses.push('(');
            if(s[i] == '{')
                parentheses.push('{');
            if(s[i] == '[')
                parentheses.push('[');
            if(s[i] == ')')
            {
                if(!parentheses.empty() && parentheses.top() == '(')
                    parentheses.pop();
                else
                    return false;
            }
            if(s[i] == '}')
            {
                if(!parentheses.empty() && parentheses.top() == '{')
                    parentheses.pop();
                else
                    return false;
            }
            if(s[i] == ']')
            {
                if(!parentheses.empty() && parentheses.top() == '[')
                    parentheses.pop();
                else
                    return false;
            }
        }
        if(parentheses.empty())
            return true;
        else
            return false;
    }
};
