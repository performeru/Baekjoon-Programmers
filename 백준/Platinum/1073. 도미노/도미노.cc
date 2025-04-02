#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int deg[10]; 
ll dp[10];   

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) 
    {
        string s;
        cin >> s;
        int a = s[0] - '0', b = s[1] - '0';
        deg[a]++;  
        deg[b]++;  
    }
    
    dp[0] = 1;
    
    for (int i = 2; i <= 8; i += 2) 
    {
        dp[i] = (i - 1) * dp[i - 2];
    }

    ll answer = 1;
    
    for (int i = 0; i <= 9; i++) 
    {
        answer *= dp[deg[i]];
    }
    
    cout << answer << '\n';

}

