#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int dx[4] = {-1, 1, 0, 0};
const int dy[4] = {0, 0, -1, 1};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<string> grid(n);

    for (int i = 0; i < n; i++) 
    {
        cin >> grid[i];
    }

    queue<pair<int, int>> q;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    int normalRegions = 0;

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (!visited[i][j]) 
            {
                char color = grid[i][j];
                q.push({i, j});
                visited[i][j] = true;
                normalRegions++;

                while (!q.empty()) 
                {
                    int cx = q.front().first;
                    int cy = q.front().second;
                    q.pop();

                    for (int k = 0; k < 4; k++) 
                    {
                        int nx = cx + dx[k];
                        int ny = cy + dy[k];

                        if (nx >= 0 && nx < n && ny >= 0 && ny < n && !visited[nx][ny] && grid[nx][ny] == color)
                        {
                            visited[nx][ny] = true;
                            q.push({nx, ny});
                        }
                    }
                }
            }
        }
    }

    visited.assign(n, vector<bool>(n, false));
    int colorblindRegions = 0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (!visited[i][j]) 
            {
                colorblindRegions++;
                char color = grid[i][j];
                q.push({i, j});
                visited[i][j] = true;

                while (!q.empty()) 
                {
                    int cx = q.front().first;
                    int cy = q.front().second;
                    q.pop();

                    for (int k = 0; k < 4; k++) 
                    {
                        int nx = cx + dx[k];
                        int ny = cy + dy[k];

                        if (nx >= 0 && nx < n && ny >= 0 && ny < n && !visited[nx][ny]) 
                        {
                            if (color == 'R' || color == 'G')
                            {
                                if (grid[nx][ny] == 'R' || grid[nx][ny] == 'G') 
                                {
                                    visited[nx][ny] = true;
                                    q.push({nx, ny});
                                }
                            }
                            else 
                            {
                                if (grid[nx][ny] == color) 
                                {
                                    visited[nx][ny] = true;
                                    q.push({nx, ny});
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    cout << normalRegions << " " << colorblindRegions << "\n";

}