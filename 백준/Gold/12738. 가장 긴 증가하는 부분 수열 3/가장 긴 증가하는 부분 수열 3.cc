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
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) 
    {
        cin >> A[i];
    }

    vector<int> lis;
    
    for (int i = 0; i < N; i++) 
    {
        auto pos = lower_bound(lis.begin(), lis.end(), A[i]);
        
        if (pos == lis.end()) 
        {
            lis.push_back(A[i]);
        } 
        else 
        {
            *pos = A[i];
        }
    }

    cout << lis.size() << '\n';
    
}