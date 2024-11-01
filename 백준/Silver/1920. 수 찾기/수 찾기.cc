#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> a(n);
    
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    
    int m;
    cin >> m;
    
    while(m--)
    {
        int t;
        cin >> t;
        
        cout << binary_search(a.begin(), a.end(), t) << '\n';
    }
    
}