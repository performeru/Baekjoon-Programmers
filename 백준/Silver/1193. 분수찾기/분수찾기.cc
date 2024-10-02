#include <iostream>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int X;
    cin >> X;

    int diagonal = 1;
    int sum = 0;

    while (sum < X) 
    {
        sum += diagonal;
        diagonal++;
    }

    diagonal--; 
    int indexInDiagonal = X - (sum - diagonal);

    int numerator, denominator;
    if (diagonal % 2 == 0) 
    {
        numerator = indexInDiagonal;
        denominator = diagonal - indexInDiagonal + 1;
    }
    else
    {
        numerator = diagonal - indexInDiagonal + 1;
        denominator = indexInDiagonal;
    }

    cout << numerator << "/" << denominator << "\n";

}