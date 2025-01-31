#include <iostream>

using namespace std;

static int m, k, t = 0;  
static int d[51];
static double probability[51];
static double ans = 0.0;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> m;
    
    for(int i = 0 ; i < m; i++) 
    {
        cin >> d[i];
        t += d[i];
    }
    
    cin >> k;
    
    for(int i = 0 ; i < m; i++) 
    {
        if(d[i] >= k) 
        {
            probability[i] = 1.0;
            for(int j = 0; j < k; j++) 
            { 
                probability[i] *= (double)(d[i] - j) / (t - j);
            }
        }
    }
    
    for(int i = 0; i < m; i++) 
    { 
        ans += probability[i]; 
    }

    cout << fixed;
    cout.precision(9);
    cout << ans;
}
