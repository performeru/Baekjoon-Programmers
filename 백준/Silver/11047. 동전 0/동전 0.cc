#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    int count = 0;
    
    for(int i = n - 1; i >= 0; i--)
    {
        if(a[i] <= k)
        {
            count += (k / a[i]);
            k = k % a[i];   
        }
    }
        
    cout << count << '\n';
}