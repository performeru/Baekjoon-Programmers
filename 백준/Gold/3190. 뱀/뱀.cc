#include <iostream>
#include <vector>
#include <deque>
#include <map>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, K;
    cin >> N >> K;

    vector<vector<int>> board(N, vector<int>(N, 0));
    for (int i = 0; i < K; ++i) 
    {
        int x, y;
        cin >> x >> y;
        board[x - 1][y - 1] = 1;
    }

    int L;
    cin >> L;
    map<int, char> dirChange;
    
    for (int i = 0; i < L; ++i) 
    {
        int t;
        char c;
        cin >> t >> c;
        dirChange[t] = c;
    }

    int dx[4] = { 0, 1, 0, -1 }; 
    int dy[4] = { 1, 0, -1, 0 };
    int dir = 0; 

    deque<pair<int, int>> snake;
    snake.push_back({ 0, 0 });
    vector<vector<bool>> visited(N, vector<bool>(N, false));
    visited[0][0] = true;

    int time = 0;
    while (true) 
    {
        time++;
        int x = snake.back().first;
        int y = snake.back().second;
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (nx < 0 || ny < 0 || nx >= N || ny >= N || visited[nx][ny]) 
        {
            break;
        }

        if (board[nx][ny] == 1) 
        {
            board[nx][ny] = 0;
            snake.push_back({ nx, ny });
            visited[nx][ny] = true;
        }
        else 
        {
            snake.push_back({ nx, ny });
            visited[nx][ny] = true;
            auto tail = snake.front();
            visited[tail.first][tail.second] = false;
            snake.pop_front();
        }

        if (dirChange.count(time)) 
        {
            if (dirChange[time] == 'L') 
            {
                dir = (dir + 3) % 4;
            }
            else 
            {
                dir = (dir + 1) % 4;
            }
        }
    }

    cout << time << '\n';

}
