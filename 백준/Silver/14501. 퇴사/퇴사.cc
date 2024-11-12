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
    
    vector<int> T(N + 1), P(N + 1), dp(N + 2, 0);

    for (int i = 1; i <= N; i++) 
    {
        cin >> T[i] >> P[i];
    }

    for (int i = 1; i <= N; i++) 
    {
        dp[i + 1] = max(dp[i + 1], dp[i]);

        if (i + T[i] <= N + 1) 
        {
            dp[i + T[i]] = max(dp[i + T[i]], dp[i] + P[i]);
        }
    }

    cout << dp[N + 1] << '\n';

}
