#include <iostream>

using namespace std;

int countOnes(int n) 
{
    int count = 0;
    
    while (n > 0) 
    {
        count += (n & 1);
        n >>= 1;
    }
    return count;
}

int main() 
{
    int N, K;
    cin >> N >> K;

    int addedBottles = 0;
    while (countOnes(N) > K) 
    {
        N++;
        addedBottles++;
    }

    cout << addedBottles << '\n';
}
