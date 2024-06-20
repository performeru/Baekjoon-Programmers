#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;

    vector<int> heights(N);
    for (int i = 0; i < N; ++i) 
    {
        cin >> heights[i];
    }

    int visibleCount = 0;
    int maxHeight = 0;

    for (int i = N - 1; i >= 0; --i) 
    {
        if (heights[i] > maxHeight) 
        {
            visibleCount++;
            maxHeight = heights[i];
        }
    }

    cout << visibleCount << "\n";

}