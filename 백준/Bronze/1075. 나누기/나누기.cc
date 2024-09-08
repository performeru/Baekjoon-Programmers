#include <iostream>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, F;
    cin >> N >> F;
    
    int temp = (N / 100) * 100;
    
    int result;
    
    for (int i = 0; i < 100; i++) 
    {
        if ((temp + i) % F == 0) 
        {
            result = i;
            break;
        }
    }
    
    if (result < 10)
    {
        cout << "0";
    }
    
    cout << result << "\n";

}