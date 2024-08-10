#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int num;
    cin >> num;

    vector<int> divisors(num);
    for (int i = 0; i < num; i++) 
    {
        cin >> divisors[i];
    }

    int min_divisor = *min_element(divisors.begin(), divisors.end());
    int max_divisor = *max_element(divisors.begin(), divisors.end());

    int N = min_divisor * max_divisor;

    cout << N << "\n";

}