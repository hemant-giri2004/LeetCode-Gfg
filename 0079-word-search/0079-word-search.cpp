
class Solution {
public:
    bool dfs(vector<vector<char>>& board, string& word, int index, int r, int c) {
        if (index == word.length()) return true; // Word completely found
        if (r < 0 || c < 0 || r >= board.size() || c >= board[0].size() || board[r][c] != word[index]) 
            return false;

        char temp = board[r][c];
        board[r][c] = '#'; // Mark as visited
        
        // Explore all 4 directions
        bool found = dfs(board, word, index + 1, r + 1, c) ||
                     dfs(board, word, index + 1, r - 1, c) ||
                     dfs(board, word, index + 1, r, c + 1) ||
                     dfs(board, word, index + 1, r, c - 1);
        
        board[r][c] = temp; // Restore cell for backtracking
        return found;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int rows = board.size();
        int cols = board[0].size();

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (board[i][j] == word[0] && dfs(board, word, 0, i, j))
                    return true;
            }
        }
        return false;
    }
};

