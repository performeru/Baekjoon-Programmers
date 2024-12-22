#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> paper;
int countMinus1 = 0, countZero = 0, countOne = 0;

bool isSameNumber(int x, int y, int size) 
{
    int first = paper[x][y];
    
    for (int i = x; i < x + size; i++) 
    {
        for (int j = y; j < y + size; j++) 
        {
            if (paper[i][j] != first) 
            {
                return false;
            }
        }
    }
    return true;
}

void divideAndConquer(int x, int y, int size) 
{
    if (isSameNumber(x, y, size)) 
    {
        int value = paper[x][y];
        
        if (value == -1) countMinus1++;
        else if (value == 0) countZero++;
        else if (value == 1) countOne++;
        return;
    }

    int newSize = size / 3;
    
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            divideAndConquer(x + i * newSize, y + j * newSize, newSize);
        }
    }
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    paper.resize(N, vector<int>(N));
    
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            cin >> paper[i][j];
        }
    }

    divideAndConquer(0, 0, N);

    cout << countMinus1 << "\n" << countZero << "\n" << countOne << "\n";

}
