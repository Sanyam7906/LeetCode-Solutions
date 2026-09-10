class Solution {
public:
    bool IsSafe(vector<string> board,int r,int c,int n)
    {
        // check if safe
        // dont check for row as one in one only 
        // for col
        for(int i=0;i<n;i++)
        {
            if(board[i][c]=='Q')
            {
                return false;
            }
        }
        // diagonals upper then current r
        for(int i=r,j=c;i>=0 && j>=0;i--,j--)
        {
            if(board[i][j]=='Q')
            {
                return false;
            }
        }
        for(int i=r,j=c;i>=0 && j<n;i--,j++)
        {
            if(board[i][j]=='Q')
            {
                return false;
            }
        }
        return true;
    }
    void fun(vector<string> &board,int row,int n,vector<vector<string>> &ans)
    {
        if(row == n)
        {
            ans.push_back(board);
            return;
        }
        // do col wise
        for(int i=0;i<n;i++)
        {
            if(IsSafe(board,row,i,n))
            {
                board[row][i] = 'Q';
                fun(board,row+1,n,ans);
                board[row][i] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        vector<vector<string>> ans;
        fun(board,0,n,ans);
        return ans;
    }
};