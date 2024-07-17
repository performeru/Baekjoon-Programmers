#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int m, n, k;
        cin >> m >> n >> k;
        
        vector<vector<int>> field(m, vector<int>(n, 0));
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        
        for (int i = 0; i < k; i++) {
            int x, y;
            cin >> x >> y;
            field[x][y] = 1;
        }
        
        int count = 0;
        queue<pair<int, int>> q;
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (field[i][j] == 1 && !visited[i][j]) {
                    count++;
                    q.push({i, j});
                    visited[i][j] = true;

                    while (!q.empty()) {
                        int cx = q.front().first;
                        int cy = q.front().second;
                        q.pop();

                        for (int d = 0; d < 4; d++) {
                            int nx = cx + dx[d];
                            int ny = cy + dy[d];

                            if (nx >= 0 && ny >= 0 && nx < m && ny < n && field[nx][ny] == 1 && !visited[nx][ny]) {
                                visited[nx][ny] = true;
                                q.push({nx, ny});
                            }
                        }
                    }
                }
            }
        }
        
        cout << count << "\n";
    }

}