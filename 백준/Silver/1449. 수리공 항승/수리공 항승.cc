#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, L;
    cin >> N >> L;

    vector<int> leaks(N);
    for (int i = 0; i < N; i++) 
    {
        cin >> leaks[i];
    }

    sort(leaks.begin(), leaks.end());

    int count = 0; 
    int i = 0;    

    while (i < N) 
    {
        count++; 
        int coverEnd = leaks[i] + L - 1; 
        while (i < N && leaks[i] <= coverEnd) 
        {
            i++;
        }
    }

    cout << count << '\n';

}
