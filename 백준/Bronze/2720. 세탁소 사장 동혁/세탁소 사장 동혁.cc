#include <iostream>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T, C, quarter, dime, nickel, penny;

    cin >> T; 

    while (T--) 
    {
        cin >> C; 

        quarter = C / 25; 
        C %= 25;
        dime = C / 10; 
        C %= 10;
        nickel = C / 5; 
        penny = C % 5; 

        cout << quarter << " " << dime << " " << nickel << " " << penny << "\n";
    }

}