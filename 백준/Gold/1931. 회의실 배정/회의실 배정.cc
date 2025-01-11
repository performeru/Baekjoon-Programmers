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
    vector<pair<int, int>> a(n);
    
    for(int i = 0; i < n; i++)
    {
        cin >> a[i].second;
        cin >> a[i].first;
    }
    
    sort(a.begin(), a.end());
    
    int count = 0;
    int end = -1;
    
    for(int i = 0; i < n; i++)
    {
        if(a[i].second >= end)
        {
            end = a[i].first;
            count++;
        }
    }
    cout << count << '\n';
}