class Solution {
public:
    int n;
    int m;
    bool IsSafe(vector<vector<char>> &board,int row, int col,char dig)
        {
            // check col
            // check row 

            // skip the current cell ****
            for(int i=0;i<n;i++)
            {
                if(i!=row && board[i][col] == dig)
                {
                    return false;
                }
            }
            for(int i=0;i<n;i++)
            {
                if(i!=col && board[row][i] == dig)
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
                    if((i != row || j != col) && board[i][j] == dig)
                    {
                        return false;
                    }
                }
            }
            return true;
        }
    bool isValidSudoku(vector<vector<char>>& board) {
        n = board.size();
        m = board[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]!='.' && !IsSafe(board,i,j,board[i][j]))
                {
                    return false;
                }
            }
        }
        return true;
    }
};