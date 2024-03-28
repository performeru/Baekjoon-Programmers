#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int T;
    cin >> T;

    while (T--) 
    {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        double distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

        if(distance == 0 && r1 == r2)
        {
            cout << "-1" << endl;
        }
        else if(distance > r1 + r2 || distance < abs(r1 - r2))
        {
            cout << "0" << endl;
        }
        else if (distance == r1 + r2 || distance == abs(r1 - r2)) 
        {
            cout << "1" << endl;
        }
        else 
        {
            cout << "2" << endl;
        }
    }
}