class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> answers;
        for(int i = 0; i <= n; i++)
        {
            int count = 0;
            int number = i;

            while(number > 0)
            {
                if(number & 1)
                    count++;

                number = number>>1;
            }

            answers.push_back(count);
        }
        return answers;
    }
};
