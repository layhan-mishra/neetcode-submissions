class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rowSeen[9][9] = {};
        bool columnSeen[9][9] = {};
        bool squareSeen[9][9] = {};
        for (int i = 0; i< 81; i++)
        {
            int row = i/9;
            int column = i%9;
            int square = (row/3) * 3 + (column/3);
            if (!(board[row][column] == '.'))
            {
                if(rowSeen[row][(board[row][column]-'1')])
                    return false;
                else
                    rowSeen[row][(board[row][column]-'1')] = true;

                if(columnSeen[column][(board[row][column]-'1')])
                    return false;
                else
                    columnSeen[column][(board[row][column]-'1')] = true;

                if(squareSeen[square][(board[row][column]-'1')])
                    return false;
                else
                    squareSeen[square][(board[row][column]-'1')] = true;
            }
        }
        return true;
    }
};
