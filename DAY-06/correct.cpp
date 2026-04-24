class Solution {
public:
    void dfs(int i, int j, int m, int n, vector<vector<char>>& board) {
        if (i < 0 || i > (m - 1) || j < 0 || j > (n - 1)) {
            // out of boundary base case
            return;
        }
        if (board[i][j] != 'O')
            return;
        // 3. mark 'O' to '#'
        board[i][j] = '#';
        // up
        dfs(i - 1, j, m, n, board);
        // down
        dfs(i + 1, j, m, n, board);
        // left
        dfs(i, j - 1, m, n, board);
        // right
        dfs(i, j + 1, m, n, board);
    }
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        // 1. find edge 'O'
        // 2. find connected 'O' from edge's 'O'
        for (int i = 0; i < n; i++) {
            // top row
            if (board[0][i] == 'O') {
                dfs(0, i, m, n, board);
            }
            // bottom row
            if (board[m - 1][i] == 'O') {
                dfs(m - 1, i, m, n, board);
            }
        }
        for (int i = 1; i < (m - 1); i++) {
            // left row
            if (board[i][0] == 'O') {
                dfs(i, 0, m, n, board);
            }
            // right row
            if (board[i][n - 1] == 'O') {
                dfs(i, n - 1, m, n, board);
            }
        }
        // 4. recreate the answer
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 'O') {
                    board[i][j] = 'X';
                } else if (board[i][j] == '#') {
                    board[i][j] = 'O';
                } else {
                    // Happy Coding
                }
            }
        }
    }
};
//TC->O(mn)
//SC->O(mn)