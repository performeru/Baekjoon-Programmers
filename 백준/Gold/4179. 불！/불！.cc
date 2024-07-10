#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

const int MAX = 1000;
const int dx[4] = {1, -1, 0, 0};
const int dy[4] = {0, 0, 1, -1};

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int R, C;
    cin >> R >> C;

    char maze[MAX][MAX];
    int fire_time[MAX][MAX];
    int jihun_time[MAX][MAX];
    
    queue<pair<int, int>> fire_queue;
    int start_x, start_y;

    for (int i = 0; i < MAX; i++) 
    {
        fill(fire_time[i], fire_time[i] + MAX, -1);
        fill(jihun_time[i], jihun_time[i] + MAX, -1);
    }
    
    for (int i = 0; i < R; i++) 
    {
        for (int j = 0; j < C; j++) 
        {
            cin >> maze[i][j];
            if (maze[i][j] == 'F') 
            {
                fire_queue.push({i, j});
                fire_time[i][j] = 0;
            }
            if (maze[i][j] == 'J') 
            {
                start_x = i;
                start_y = j;
                jihun_time[i][j] = 0;
            }
        }
    }

    while (!fire_queue.empty()) 
    {
        int x = fire_queue.front().first;
        int y = fire_queue.front().second;
        fire_queue.pop();
        
        for (int i = 0; i < 4; i++) 
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (nx >= 0 && nx < R && ny >= 0 && ny < C) 
            {
                if (maze[nx][ny] != '#' && fire_time[nx][ny] == -1) 
                {
                    fire_time[nx][ny] = fire_time[x][y] + 1;
                    fire_queue.push({nx, ny});
                }
            }
        }
    }

    queue<pair<int, int>> jihun_queue;
    jihun_queue.push({start_x, start_y});
    
    while (!jihun_queue.empty()) 
    {
        int x = jihun_queue.front().first;
        int y = jihun_queue.front().second;
        jihun_queue.pop();
        
        for (int i = 0; i < 4; i++) 
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (nx >= 0 && nx < R && ny >= 0 && ny < C) 
            {
                if (maze[nx][ny] != '#' && jihun_time[nx][ny] == -1) 
                {
                    if (fire_time[nx][ny] == -1 || jihun_time[x][y] + 1 < fire_time[nx][ny]) 
                    {
                        jihun_time[nx][ny] = jihun_time[x][y] + 1;
                        jihun_queue.push({nx, ny});
                    }
                }
            } 
            else
            {
                cout << jihun_time[x][y] + 1 << "\n";
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE" << "\n";

}