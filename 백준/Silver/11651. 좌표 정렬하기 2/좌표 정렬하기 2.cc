#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;

    vector<pair<int, int>> points(N);

    for (int i = 0; i < N; ++i) 
    {
        cin >> points[i].first >> points[i].second;
    }

    sort(points.begin(), points.end(), [](const pair<int, int>& a, const pair<int, int>& b) 
    {
        if (a.second == b.second) 
        {
            return a.first < b.first; 
        }
        return a.second < b.second;
    });

    for (const auto& point : points) 
    {
        cout << point.first << " " << point.second << "\n";
    }

}