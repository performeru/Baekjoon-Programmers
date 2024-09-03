#include <iostream>

using namespace std;

// 동적 프로그래밍을 사용한 조합 계산
int combination(int n, int r) 
{
    int dp[30][30] = {0};

    for (int i = 0; i <= n; i++) 
    {
        dp[i][0] = 1;
        dp[i][i] = 1;
    }

    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= r; j++) 
        {
            dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
        }
    }

    return dp[n][r];
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;

    while (t--) 
    {
        int N, M;
        cin >> N >> M;

        cout << combination(M, N) << "\n";
    }

}