#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<pair<int, string>> a(n);
    
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i].first >> a[i].second; 
    }
    
    stable_sort(a.begin(), a.end(), [](const pair<int, string> &x, const pair<int, string> &y) 
    {
        return x.first < y.first; 
    });
    
    for (const auto &p : a) 
    {
        cout << p.first << " " << p.second << "\n";
    }
    
}
