#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct Circle 
{
    int cx, cy, r;
};

int checkPosition(int x, int y, Circle& circle) 
{
    int dist_squared = (x - circle.cx) * (x - circle.cx) + (y - circle.cy) * (y - circle.cy);
    int r_squared = circle.r * circle.r;

    if (dist_squared < r_squared) 
    {
        return 1; 
    }
    if (dist_squared > r_squared) 
    {
        return -1; 
    }
    return 0; 
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T;
    cin >> T;

    while (T--) 
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int n;
        cin >> n;

        vector<Circle> circles(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> circles[i].cx >> circles[i].cy >> circles[i].r;
        }

        int count = 0;

        for (Circle& circle : circles) 
        {
            int start_pos = checkPosition(x1, y1, circle);
            int end_pos = checkPosition(x2, y2, circle);

            if (start_pos != end_pos) 
            { 
                count++;
            }
        }

        cout << count << "\n";
    }

}