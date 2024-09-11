#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    cin >> N >> M;
    vector<vector<char>> grid(N, vector<char>(M));

    for (int i = 0; i < N; ++i) 
    {
        for (int j = 0; j < M; ++j) 
        {
            cin >> grid[i][j];
        }
    }

    int maxSize = 1;

    for (int i = 0; i < N; ++i) 
    {
        for (int j = 0; j < M; ++j) 
        {
            for (int size = 1; i + size < N && j + size < M; ++size) 
            {
                if (grid[i][j] == grid[i][j + size] &&
                    grid[i][j] == grid[i + size][j] &&
                    grid[i][j] == grid[i + size][j + size]) 
                {
                    maxSize = max(maxSize, size + 1);
                }
            }
        }
    }

    cout << maxSize * maxSize << "\n";

}