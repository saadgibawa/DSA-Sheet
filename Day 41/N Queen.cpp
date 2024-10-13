class Solution {
public:
    bool safe(int r, int c, vector<string> &board)
    {
        int row=r;
        int col=c;
        while(col>=0&&row>=0)
        {
            if(board[row][col]=='Q')
                return false;
            row--;col--;
        }
        row=r;
        col=c;
        while(col>=0)
        {
            if(board[row][col]=='Q')
                return false;
            col--;
        }
        col=c;
        while(row<board.size()&&col>=0)
        {
            if(board[row][col]=='Q')
                return false;
            row++;col--;
        }
        return true;
    }
    void help(int c, vector<vector<string>> &ans, vector<string> &board, int n)
    {
        if(c==n)
        {
            ans.push_back(board);
            return;
        }
        for(int i=0;i<n;i++)
        {
            if(safe(i,c,board))
            {
                board[i][c]='Q';
                help(c+1,ans,board,n);
                board[i][c]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n,string(n,'.'));
        int r=0,c=0;
        help(c,ans,board,n);
        return ans;
    }
};