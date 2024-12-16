#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> T(n + 1, 0); 

    for (int i = 0; i < n; i++) 
    {
        cin >> T[i];
    }

    stack<int> s;
    long long max_profit = 0;

    for (int i = 0; i <= n; i++) 
    {
        while (!s.empty() && T[s.top()] > T[i]) 
        {
            int h = T[s.top()]; 
            s.pop();

            int width = s.empty() ? i : (i - s.top() - 1);
            max_profit = max(max_profit, 1LL * h * width);
        }
        s.push(i);
    }

    cout << max_profit << '\n';
}
