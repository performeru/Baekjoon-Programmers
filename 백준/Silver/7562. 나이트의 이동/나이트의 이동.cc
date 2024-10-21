#include <iostream>
#include <queue>
#include <vector>
#include <cstring>

using namespace std;

const int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2}; 
const int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};  

int bfs(int l, pair<int, int> start, pair<int, int> goal) 
{
    vector<vector<int>> dist(l, vector<int>(l, -1));  
    queue<pair<int, int>> q;
    
    q.push(start);
    dist[start.first][start.second] = 0;
    
    while (!q.empty()) 
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        if (x == goal.first && y == goal.second)  
        {
            return dist[x][y];
        }
        
        for (int i = 0; i < 8; ++i) 
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (nx >= 0 && ny >= 0 && nx < l && ny < l && dist[nx][ny] == -1) 
            {
                dist[nx][ny] = dist[x][y] + 1; 
                q.push({nx, ny});
            }
        }
    }

}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;  
    
    while (t--) 
    {
        int l;
        cin >> l;
        
        pair<int, int> start, goal;
        cin >> start.first >> start.second;
        cin >> goal.first >> goal.second;
        
        if (start == goal) 
        {
            cout << 0 << "\n";
        } 
        else 
        {
            cout << bfs(l, start, goal) << "\n";
        }
    }
}