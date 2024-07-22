#include <iostream>

using namespace std;

void Hanoi(int a, int b, int n)
{
    if(n == 1)
    {
        cout << a << " " << b << "\n";
        return;
    }
    Hanoi(a, 6 - a - b, n - 1);
    cout << a << " " << b << "\n";
    Hanoi(6 - a - b, b, n-1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int k;
    cin >> k;
    
    cout << (1 << k) - 1 << "\n";
    Hanoi(1, 3, k);
}