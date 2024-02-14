#include <iostream>

using namespace std;

 int main()
 {
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     
     int num;
     cin >> num;
     
     if(num % 2 == 1)
     {
         cout << "SK";
     }
     else
     {
         cout << "CY";
     }
     
 }