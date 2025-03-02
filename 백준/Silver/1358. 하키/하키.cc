#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int W, H, X, Y, P;
    cin >> W >> H >> X >> Y >> P;

    double R = H / 2.0;

    int count = 0;
    for (int i = 0; i < P; ++i) 
    {
        int x, y;
        cin >> x >> y;

        bool inRectangle = (x >= X && x <= X + W && y >= Y && y <= Y + H);
        bool inCircle1 = (pow(x - X, 2) + pow(y - (Y + R), 2) <= R * R);
        bool inCircle2 = (pow(x - (X + W), 2) + pow(y - (Y + R), 2) <= R * R);

        if (inRectangle || inCircle1 || inCircle2) 
        {
            count++;
        }
    }

    cout << count << '\n';

}
