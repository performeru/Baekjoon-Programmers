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

    vector<vector<int>> array(N + 1, vector<int>(M + 1, 0));
    
    for (int i = 1; i <= N; i++) 
    {
        for (int j = 1; j <= M; j++) 
        {
            cin >> array[i][j];
        }
    }

    vector<vector<int>> prefix(N + 1, vector<int>(M + 1, 0));
    
    for (int i = 1; i <= N; i++) 
    {
        for (int j = 1; j <= M; j++) 
        {
            prefix[i][j] = array[i][j]
                         + prefix[i - 1][j] 
                         + prefix[i][j - 1] 
                         - prefix[i - 1][j - 1];
        }
    }

    int K;
    cin >> K;
    
    while (K--) 
    {
        int i, j, x, y;
        cin >> i >> j >> x >> y;

        int result = prefix[x][y];
        if (i > 1) result -= prefix[i - 1][y];
        if (j > 1) result -= prefix[x][j - 1];
        if (i > 1 && j > 1) result += prefix[i - 1][j - 1];

        cout << result << '\n';
    }

}
