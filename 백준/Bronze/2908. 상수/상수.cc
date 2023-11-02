#include <iostream>
#include <string>

using namespace std;

int main() 
{
    char A[4], B[4];
    cin >> A >> B;

    int a, b;
    a = 100 * (A[2] - '0') + 10 * (A[1] - '0') + A[0] - '0';
    b = 100 * (B[2] - '0') + 10 * (B[1] - '0') + B[0] - '0';

    if (a > b)
    {   
       cout << a;
    }
    else
    {
       cout << b;
    }
    
}
