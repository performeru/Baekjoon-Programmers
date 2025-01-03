#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

long long dp[20][2][200]; 

long long digitSumDP(const string& num, int pos, int tight, int sum) 
{
    if (pos == num.size()) 
    {
        return sum; 
    }
    if (dp[pos][tight][sum] != -1) 
    {
        return dp[pos][tight][sum]; 
    }
    
    long long res = 0;
    int limit = tight ? (num[pos] - '0') : 9; 

    for (int digit = 0; digit <= limit; digit++) 
    {
        res += digitSumDP(num, pos + 1, tight && (digit == limit), sum + digit);
    }

    return dp[pos][tight][sum] = res;
}

long long rangeDigitSum(long long L, long long U) 
{
    auto toString = [](long long n) { return to_string(n); };

    memset(dp, -1, sizeof(dp)); 
    long long sumU = digitSumDP(toString(U), 0, 1, 0);

    memset(dp, -1, sizeof(dp));
    long long sumL = digitSumDP(toString(L - 1), 0, 1, 0);

    return sumU - sumL;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long L, U;
    cin >> L >> U;

    cout << rangeDigitSum(L, U) << '\n';

}
