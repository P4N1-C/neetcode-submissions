class Solution {
public:
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};
    int bfs(vector<vector<int>>& grid, int i, int j, int n, int m, vector<vector<int>>& visi) {
        queue<pair<int, int>> q;
        q.push({i, j});
        visi[i][j] = 1;
        int curr = 1;
        while(!q.empty()) {
            auto [x, y] = q.front(); q.pop();
            for(int i = 0; i <4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];
                if(nx >= 0 && ny >= 0 && nx < n && ny < m && visi[nx][ny] == 0 && grid[nx][ny] == 1) {
                    q.push({nx, ny});
                    visi[nx][ny] = 1;
                    curr++;
                }
            }
        }
        return curr;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> visi(n, vector<int>(m, 0));
        int ans = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 1 && visi[i][j] == 0) {
                    int curr = bfs(grid, i, j, n, m, visi);
                    ans = max(ans, curr);
                }
            }
        }
        return ans;
    }
};
