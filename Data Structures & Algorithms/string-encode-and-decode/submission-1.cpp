class Solution {
public:

    string encode(vector<string>& strs) {
        string encryption;
        for(int i = 0; i<strs.size(); i++)
        {
            encryption += to_string(strs[i].size());
            encryption += "#";
            encryption += strs[i];
        }
        return encryption;
    }

    vector<string> decode(string s) {
        vector<string> decodedList;
        for(int i = 0; i < s.size(); i++)
        {
            if(isdigit(s[i]))
            {
                string size;
                while(s[i] != '#')
                {
                    size += s[i];
                    i++;
                }
                string word;
                int loopSize = stoi(size);
                for(int j = i+1; j < i+loopSize +1; j++)
                {
                    word += s[j];
                }
                decodedList.push_back(word);
                i += loopSize;
            }
        }
        return decodedList;
    }
};
