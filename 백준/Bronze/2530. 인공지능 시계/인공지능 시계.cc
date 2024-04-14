#include <iostream>

using namespace std;

int main() 
{
    int A, B, C; 
    int D;       

    cin >> A >> B >> C;
    cin >> D;

    C += D;
    B += C / 60;
    C %= 60;
    A += B / 60;
    B %= 60;
    A %= 24;
    
    cout << A << " " << B << " " << C << endl;

}