#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while (T--) 
    {
        int N, M;
        cin >> N >> M;

        vector<int> A(N), B(M);

        for (int i = 0; i < N; i++) 
        {
            cin >> A[i];
        }
        for (int i = 0; i < M; i++) 
        {
            cin >> B[i];
        }

        sort(A.begin(), A.end());
        sort(B.begin(), B.end());

        long long result = 0;

        for (int i = 0; i < N; i++) 
        {
            result += upper_bound(B.begin(), B.end(), A[i] - 1) - B.begin();
        }

        cout << result << "\n";
    }

}
