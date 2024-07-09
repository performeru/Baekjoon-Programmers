#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int board[1002][1002];
    int dist[1002][1002];
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    
    int n, m;
    cin >> m >> n;
    
    queue<pair<int, int>> Q;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> board[i][j];
            if(board[i][j] == 1)
            {
                Q.push({i, j});
                dist[i][j] = 0;
            }
            else if(board[i][j] == 0)
            {
                dist[i][j] = -1; 
            }
            else
            {
                dist[i][j] = -2; 
            }
        }
    }
    
    while(!Q.empty())
    {
        auto cur = Q.front();
        Q.pop();
        for(int dir = 0; dir < 4; dir++)
        {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m)
            {
                continue;
            }
            if(dist[nx][ny] != -1)
            {
                continue;
            }
            dist[nx][ny] = dist[cur.first][cur.second] + 1;
            Q.push({nx, ny});
        }
    }
    
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(dist[i][j] == -1)
            {
                cout << -1;
                return 0;
            }
            ans = max(ans, dist[i][j]);
        }
    }
    cout << ans;

}