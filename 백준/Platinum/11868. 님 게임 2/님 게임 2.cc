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
    vector<int> P(N);
    
    for (int i = 0; i < N; i++) 
    {
        cin >> P[i];
    }

    int nim_sum = 0;
    
    for (int i = 0; i < N; i++) 
    {
        nim_sum ^= P[i];
    }

    if (nim_sum != 0) 
    {
        cout << "koosaga" << "\n";
    }
    else
    {
        cout << "cubelover" << "\n";
    }

}