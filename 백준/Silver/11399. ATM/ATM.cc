#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    
    vector<int> times(N);
    
    for (int i = 0; i < N; i++) 
    {
        cin >> times[i];
    }
    
    sort(times.begin(), times.end());
    
    int total_time = 0;
    
    for (int i = 0; i < N; i++) 
    {
        total_time += times[i] * (N - i);
    }

    cout << total_time << "\n";
 
}