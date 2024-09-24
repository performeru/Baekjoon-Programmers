#include <iostream>

using namespace std;

int N, K, s, R1, R2, C1, C2;

bool isBlack(int r, int c, int size) 
{
    if (size == 1) 
    {
        return false; 
    }

    int nSize = size / N;  
    int rPos = (r / nSize) % N;  
    int cPos = (c / nSize) % N;

    int midStart = (N - K) / 2;
    int midEnd = midStart + K;

    if (midStart <= rPos && rPos < midEnd && midStart <= cPos && cPos < midEnd) 
    {
        return true;  
    }

    return isBlack(r, c, nSize);
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> s >> N >> K >> R1 >> R2 >> C1 >> C2;

    int size = 1;
    
    for (int i = 0; i < s; ++i) 
    {
        size *= N;
    }

    for (int r = R1; r <= R2; ++r) 
    {
        for (int c = C1; c <= C2; ++c) 
        {
            if (isBlack(r, c, size)) 
            {
                cout << '1';
            } 
            else 
            {
                cout << '0';
            }
        }
        cout << '\n';
    }

}