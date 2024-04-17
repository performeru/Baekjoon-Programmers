#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int x;
    cin >> x; 

    int sticks = 0;
    int length = 64;

    while (x > 0) 
    {
        if (length > x) 
        { 
            length /= 2; 
        } 
        else 
        {
            x -= length; 
            sticks++; 
        }
    }

    cout << sticks << endl;

}