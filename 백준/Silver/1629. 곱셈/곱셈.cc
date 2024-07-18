#include <iostream>

using namespace std;

long long pow(long long a, long long b, long long c)
{
    if(b == 1)
    {
        return a % c;
    }
    long long val = pow(a, b / 2, c);
    val = val * val % c;
    
    if(b % 2 == 0)
    {
        return val;
    }
    return val * a % c;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long a, b, c;
    cin >> a >> b >> c;
    cout << pow(a, b, c);
}