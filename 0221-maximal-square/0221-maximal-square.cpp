class Solution {
public:
    int m, n;

    int solve(int i, int j, vector<vector<char>>& matrix,
              vector<vector<int>>& dp) {
        if (i >= m || j >= n)
            return 0;
        if (matrix[i][j] == '0')
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];

        int right = solve(i, j + 1, matrix, dp);
        int down = solve(i + 1, j, matrix, dp);
        int diagonal = solve(i + 1, j + 1, matrix, dp);

        return dp[i][j] = 1 + min({right, down, diagonal});
    }

    int maximalSquare(vector<vector<char>>& matrix) {
        m = matrix.size();
        n = matrix[0].size();

        vector<vector<int>> dp(m, vector<int>(n, -1));
        int result = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == '1') {
                    result = max(result, solve(i, j, matrix, dp));
                }
            }
        }
        return result * result; // area of largest square
    }
};
