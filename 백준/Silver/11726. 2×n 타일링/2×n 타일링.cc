#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    const int mod = 10007;
    int dp[1001];
    
    int n;
    cin >> n;
    
    dp[1] = 1;
    dp[2] = 2;
    
    for (int i = 3; i <= n; i++) 
    {
        dp[i] = (dp[i - 1] + dp[i - 2]) % mod; 
    }

    cout << dp[n] << '\n'; 
}