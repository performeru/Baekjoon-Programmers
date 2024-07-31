#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T;
    cin >> T;

    vector<vector<int>> dp(15, vector<int>(15, 0));

    for (int i = 1; i <= 14; i++) 
    {
        dp[0][i] = i;
    }

    for (int k = 1; k <= 14; k++) 
    {
        for (int n = 1; n <= 14; n++)
        {
            for (int i = 1; i <= n; i++) 
            {
                dp[k][n] += dp[k-1][i];
            }
        }
    }

    while (T--) 
    {
        int k, n;
        cin >> k >> n;
        cout << dp[k][n] << "\n";
    }

}