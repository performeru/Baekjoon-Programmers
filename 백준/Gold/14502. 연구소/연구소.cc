#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N, M;
vector<vector<int>> lab;
vector<pair<int, int>> empty_spaces;
vector<pair<int, int>> viruses;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int bfs(vector<vector<int>>& temp_lab) 
{
    queue<pair<int, int>> q;
    for (auto virus : viruses) 
    {
        q.push(virus);
    }

    while (!q.empty()) 
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) 
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < N && ny >= 0 && ny < M && temp_lab[nx][ny] == 0) 
            {
                temp_lab[nx][ny] = 2;
                q.push({nx, ny});
            }
        }
    }

    int safe_area = 0;
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < M; j++) 
        {
            if (temp_lab[i][j] == 0) 
            {
                safe_area++;
            }
        }
    }
    return safe_area;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> M;
    lab.resize(N, vector<int>(M));

    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < M; j++) 
        {
            cin >> lab[i][j];
            if (lab[i][j] == 0) 
            {
                empty_spaces.push_back({i, j});
            }
            else if (lab[i][j] == 2)
            {
                viruses.push_back({i, j});
            }
        }
    }

    int max_safe_area = 0;
    int empty_size = empty_spaces.size();
    
    for (int i = 0; i < empty_size - 2; i++) 
    {
        for (int j = i + 1; j < empty_size - 1; j++) 
        {
            for (int k = j + 1; k < empty_size; k++) 
            {
                vector<vector<int>> temp_lab = lab;

                temp_lab[empty_spaces[i].first][empty_spaces[i].second] = 1;
                temp_lab[empty_spaces[j].first][empty_spaces[j].second] = 1;
                temp_lab[empty_spaces[k].first][empty_spaces[k].second] = 1;

                int safe_area = bfs(temp_lab);
                max_safe_area = max(max_safe_area, safe_area);
            }
        }
    }

    cout << max_safe_area << "\n";

}