#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int& x : a) 
    {
        cin >> x;
    }
    
    vector<int> lis;

    for (int i = 0; i < n; i++) 
    {
        int num = a[i];

        if (lis.empty() || lis.back() < num) 
        {
            lis.push_back(num);
        } 
        else
        {
            auto it = lower_bound(lis.begin(), lis.end(), num);
            *it = num;
        }
    }

    cout << lis.size() << '\n';

}