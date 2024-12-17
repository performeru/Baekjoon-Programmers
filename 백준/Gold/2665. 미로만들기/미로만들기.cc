#include <iostream>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;

const int INF = 1e9;
const int dx[4] = {0, 0, -1, 1}; 
const int dy[4] = {-1, 1, 0, 0};

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;

    vector<vector<int>> maze(n, vector<int>(n));
    vector<vector<int>> visited(n, vector<int>(n, INF)); 

    for (int i = 0; i < n; i++) 
    {
        string line;
        cin >> line;
        
        for (int j = 0; j < n; j++) 
        {
            maze[i][j] = line[j] - '0'; 
        }
    }

    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<>> pq;
    pq.push({0, 0, 0}); 
    visited[0][0] = 0;

    while (!pq.empty()) 
    {
        auto [cost, y, x] = pq.top();
        pq.pop();

        if (y == n - 1 && x == n - 1)
        {
            cout << cost << '\n';
            return 0;
        }

        for (int i = 0; i < 4; i++) 
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= n || nx < 0 || nx >= n) 
            {
                continue;
            }

            int nextCost = cost + (maze[ny][nx] == 0 ? 1 : 0);

            if (nextCost < visited[ny][nx]) 
            {
                visited[ny][nx] = nextCost;
                pq.push({nextCost, ny, nx});
            }
        }
    }

}
