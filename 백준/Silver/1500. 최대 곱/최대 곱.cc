#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int S, K;
    cin >> S >> K;

    int q = S / K;
    int r = S % K;

    vector<int> numbers(K, q);

    for (int i = 0; i < r; ++i) 
    {
        numbers[i]++;
    }

    long long maxProduct = 1;
    
    for (int i = 0; i < K; ++i) 
    {
        maxProduct *= numbers[i];
    }

    cout << maxProduct << "\n";
    
}