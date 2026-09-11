class Solution {
public:
    int n;
    bool IsSafe(vector<vector<char>> &board,int row, int col,char dig)
    {
        // check col
        // check row 
        for(int i=0;i<n;i++)
        {
            if(board[i][col] == dig)
            {
                return false;
            }
            if(board[row][i] == dig)
            {
                return false;
            }
        }
        // check the grid
        int sr = (row/3)*3;
        int sc = (col/3)*3;
        for(int i=sr;i<=sr+2;i++)
        {
            for(int j=sc;j<=sc+2;j++)
            {
                if(board[i][j] == dig)
                {
                    return false;
                }
            }
        }
        return true;
    }
    bool fun(vector<vector<char>> &board,int row, int col)
    {
        if(row == 9)
        {
            return true;
        }
        int nextRow = row;
        int nextCol = col+1;
        if(nextCol==9)
        {
            nextCol = 0;
            nextRow = row+1;
        }
        if(board[row][col]!='.')
        {
            if(fun(board,nextRow,nextCol))
            {
                return true;
            }
            return false;
        }

        for(char dig = '1';dig<='9';dig++)
        {
            if(IsSafe(board,row,col,dig))
            {
                board[row][col] = dig;
                if(fun(board,nextRow,nextCol))
                {
                    return true;
                }
                board[row][col] = '.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        n = board.size();
        fun(board,0,0);
    }
};