#include <iostream>
using namespace std;

static int N;
void DFS(int number, int jarisu);
bool isPrime(int num);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;
    DFS(2, 1);
    DFS(3, 1);
    DFS(5, 1);
    DFS(7, 1);
}

void DFS(int number, int jarisu)
{
    if (jarisu == N)
    {
        cout << number << "\n";
        return;
    }
    
    for (int i = 1; i < 10; i += 2) 
    {
        int nextNumber = number * 10 + i;
        if (isPrime(nextNumber))
        {
            DFS(nextNumber, jarisu + 1);
        }
    }
}

bool isPrime(int num)
{
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}