#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int bagCount = 0;

    while (N % 5 != 0 && N >= 0)
    {
        N -= 3;
        bagCount++;
    }

    if (N < 0) 
    {
        cout << "-1" << endl;
    }
    else
    {
        bagCount += N / 5;
        cout << bagCount << endl;
    }
}