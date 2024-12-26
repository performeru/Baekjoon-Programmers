#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;

    int points_per_side = pow(2, N) + 1;

    int total_points = points_per_side * points_per_side;

    cout << total_points << '\n';

}
