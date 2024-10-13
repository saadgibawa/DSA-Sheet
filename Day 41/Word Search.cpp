class Solution {
private:
    
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    
    bool isValid(int row, int col, int n, int m) {
        return row >= 0 and row < n and col >= 0 and col < m;
    }
    
    bool findWord(int row, int col, int ind, vector<vector<char>> &grid, 
                  vector<vector<bool>> &vis, string &word) {
        
        if (ind == word.size()) {
            return true;
        }
        
        int n = grid.size();
        int m = grid[0].size();
        
        if (!isValid(row, col, n, m) or word[ind] != grid[row][col] or vis[row][col]) 
            return false;
        
        vis[row][col] = true;
        
        for (int i = 0; i < 4; i++) {
            int newRow = row + dx[i];
            int newCol = col + dy[i];
            
            bool isPossible = findWord(newRow, newCol, ind + 1, grid, vis, word);
            
            if (isPossible) 
                return true;
        }
        
        return vis[row][col] = false;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        
        vector<vector<bool>> vis(n, vector<bool>(m));
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (findWord(i, j, 0, board, vis, word)) 
                    return true;
            }
        }
        
        return false;
    }
};