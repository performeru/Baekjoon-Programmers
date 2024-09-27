#include <iostream>
#include <vector>
#include <string>

using namespace std;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main() 
{
    int N;
    cin >> N;
    vector<string> mineMap(N);
    vector<vector<int>> result(N, vector<int>(N, 0)); 

    for (int i = 0; i < N; ++i) 
    {
        cin >> mineMap[i];
    }

    for (int i = 0; i < N; ++i) 
    {
        for (int j = 0; j < N; ++j) 
        {
            if (mineMap[i][j] >= '1' && mineMap[i][j] <= '9')
            {  
                int mines = mineMap[i][j] - '0'; 

                for (int k = 0; k < 8; ++k) 
                {
                    int ni = i + dx[k];
                    int nj = j + dy[k];
                    
                    if (ni >= 0 && ni < N && nj >= 0 && nj < N) 
                    {
                        result[ni][nj] += mines;
                    }
                }
            }
        }
    }

    for (int i = 0; i < N; ++i) 
    {
        for (int j = 0; j < N; ++j) 
        {
            if (mineMap[i][j] >= '1' && mineMap[i][j] <= '9') 
            {
                cout << '*';  
            } 
            else if (result[i][j] >= 10) 
            {
                cout << 'M';  
            }
            else 
            {
                cout << result[i][j];  
            }
        }
        cout << '\n';
    }

}