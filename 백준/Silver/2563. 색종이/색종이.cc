#include <iostream>

using namespace std;

int main() 
{
    int paper[100][100] = {0}; 
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        int x, y;
        cin >> x >> y;

        for (int dx = 0; dx < 10; dx++) 
        {
            for (int dy = 0; dy < 10; dy++) 
            {
                paper[x + dx][y + dy] = 1;
            }
        }
    }

    int area = 0;

    for (int i = 0; i < 100; i++) 
    {
        for (int j = 0; j < 100; j++) 
        {
            if (paper[i][j] == 1) area++;
        }
    }

    cout << area << '\n';
}