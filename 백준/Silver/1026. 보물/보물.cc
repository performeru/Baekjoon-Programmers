#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;

    int A[50];
    int B[50];

    for (int i = 0; i < N; ++i) 
    {
        cin >> A[i];
    }

    for (int i = 0; i < N; ++i) 
    {
        cin >> B[i];
    }

    sort(A, A + N);

    sort(B, B + N, greater<int>());

    int S = 0;

    for (int i = 0; i < N; ++i) 
    {
        S += A[i] * B[i];
    }

    cout << S << '\n';
    
}