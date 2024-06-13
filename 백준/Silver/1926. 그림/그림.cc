#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int board[502][502];
    bool vis[502][502];
    
    int n, m;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    
    cin >> n >> m;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> board[i][j];
        }
    }
    
    int mx = 0;
    int num = 0;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(board[i][j] == 0 || vis[i][j])
            {
                continue;
            }
            num++;
            queue<pair<int, int>> Q;
            vis[i][j] = true;
            Q.push({i, j});
            int area = 0;
            while(!Q.empty())
            {
                area++;
                pair<int, int> cur = Q.front();
                Q.pop();
                for(int k = 0; k < 4; k++)
                {
                    int nx = cur.first + dx[k];
                    int ny = cur.second + dy[k];
                    if(nx < 0 || nx >= n || ny < 0 || ny >= m) 
                    {
                        continue;
                    }
                    if(vis[nx][ny] || board[nx][ny] != 1)
                    {
                        continue;
                    }
                    vis[nx][ny] = true;
                    Q.push({nx, ny});
                }
            }
            mx = max(mx, area);
        }
    }
    cout << num << "\n" << mx;
}
