#include <iostream>

using namespace std;

int gcd(long a, long b);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long a, b;
    cin >> a >> b;
    
    long answer = gcd(a, b);
    
    while(answer > 0)
    {
        cout << 1;
        answer--;
    }
    cout << '\n';
}

int gcd(long a, long b)
{
    if(b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
      
}