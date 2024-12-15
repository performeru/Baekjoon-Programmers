#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<pair<int, int>> points(n);
    
    for (int i = 0; i < n; i++) 
    {
        cin >> points[i].first >> points[i].second; 
    }
    
    sort(points.begin(), points.end());
    
    for (const auto& point : points) 
    {
        cout << point.first << " " << point.second << '\n'; 
    }

}
