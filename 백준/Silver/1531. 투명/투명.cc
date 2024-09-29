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

    int canvas[101][101] = {0};

    for (int i = 0; i < N; ++i) 
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        
        for (int x = x1; x <= x2; ++x) 
        {
            for (int y = y1; y <= y2; ++y) 
            {
                canvas[x][y]++;
            }
        }
    }

    int hiddenCount = 0;

    for (int i = 1; i <= 100; ++i) 
    {
        for (int j = 1; j <= 100; ++j) 
        {
            if (canvas[i][j] > M) 
            {
                hiddenCount++;
            }
        }
    }

    cout << hiddenCount << "\n";

}