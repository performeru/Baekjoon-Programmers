#include <iostream>

using namespace std;

int main() 
{
    int N;
    cin >> N;

    int original = N;
    int cycle = 0;

    do 
    {
        int sum = (N / 10 + N % 10) % 10; 
        N = (N % 10) * 10 + sum; 
        cycle++;
    } 
    while (N != original);

    cout << cycle << endl;
}