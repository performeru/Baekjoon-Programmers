#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    cin >> N >> M;

    vector<string> castle(N);
    for (int i = 0; i < N; ++i) 
    {
        cin >> castle[i];
    }

    vector<bool> rowHasGuard(N, false);
    vector<bool> colHasGuard(M, false);

    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < M; j++) 
        {
            if (castle[i][j] == 'X') 
            {
                rowHasGuard[i] = true;
                colHasGuard[j] = true;
            }
        }
    }

    int rowsWithoutGuard = 0;
    int colsWithoutGuard = 0;

    for (int i = 0; i < N; i++) 
    {
        if (!rowHasGuard[i]) 
        {
            rowsWithoutGuard++;
        }
    }

    for (int j = 0; j < M; j++) 
    {
        if (!colHasGuard[j]) 
        {
            colsWithoutGuard++;
        }
    }

    cout << max(rowsWithoutGuard, colsWithoutGuard) << '\n';

}