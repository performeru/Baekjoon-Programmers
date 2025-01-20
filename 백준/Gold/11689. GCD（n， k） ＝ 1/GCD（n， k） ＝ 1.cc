#include<iostream>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long n;
    cin >> n;
    long answer = n;
    
    for(long p = 2; p <= sqrt(n); p++)
    {
        if(n % p == 0)
        {
            answer = answer - answer / p;
            
            while(n % p == 0)
            {
                n /= p;
            }
        }
    }
    
    if(n > 1)
    {
        answer = answer - answer / n;
    }
    cout << answer << '\n';
}