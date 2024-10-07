#include <iostream>

using namespace std;

int fib(int n, int &count1) 
{
    if (n == 1 || n == 2) 
    {
        count1++;  
        return 1;
    }
    else 
    {
        return fib(n - 1, count1) + fib(n - 2, count1);
    }
}

int fibonacci(int n, int &count2) 
{
    int f[n + 1];
    f[1] = f[2] = 1;
    
    for (int i = 3; i <= n; i++) 
    {
        f[i] = f[i - 1] + f[i - 2];
        count2++;  
    }
    return f[n];
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;

    int count1 = 0;  
    int count2 = 0;  

    fib(n, count1);

    fibonacci(n, count2);

    cout << count1 << " " << count2 << "\n";

}