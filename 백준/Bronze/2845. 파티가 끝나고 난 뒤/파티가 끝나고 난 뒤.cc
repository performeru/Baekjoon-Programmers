#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int L, P;
    cin >> L >> P; 

    int actual_count = L * P; 

    vector<int> reported_counts(5); 
    for (int i = 0; i < 5; i++) 
    {
        cin >> reported_counts[i];
    }

    for (int i = 0; i < 5; i++) 
    {
        cout << (reported_counts[i] - actual_count) << " ";
    }
    
    cout << '\n';

}
