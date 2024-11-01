#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, s;
    cin >> n >> s;
    
    vector<int> a(n);
    
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    int en = 0;
    int total = 0;
    int mn = n + 1;  
    
    for(int st = 0; st < n; st++)
    {
        while(en < n && total < s)
        {
            total += a[en];
            en++;
        }
        
        if(total >= s)
        {
            mn = min(mn, en - st);
        }

        total -= a[st];
    }
    
    if(mn == n + 1)
    {
        mn = 0;
    }
    
    cout << mn;
}