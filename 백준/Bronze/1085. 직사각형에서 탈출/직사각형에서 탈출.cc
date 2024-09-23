#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int left_dist = x;
    int right_dist = w - x;
    int bottom_dist = y;
    int top_dist = h - y;

    int min_dist = min({left_dist, right_dist, bottom_dist, top_dist});

    cout << min_dist << "\n";

}