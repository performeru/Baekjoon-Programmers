#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
    vector<bool> is_prime(m + 1, true); 
    is_prime[0] = is_prime[1] = false; 
    
    for (int i = 2; i <= sqrt(m); i++) 
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= m; j += i) 
            {
                is_prime[j] = false;
            }
        }
    }
    
    for (int i = n; i <= m; i++) 
    {
        if (is_prime[i])
        {
            cout << i << '\n';
        }
    }
    
}
