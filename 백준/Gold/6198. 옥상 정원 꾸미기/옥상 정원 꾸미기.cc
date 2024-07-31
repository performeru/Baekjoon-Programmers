#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    vector<int> heights(N);
    
    for (int i = 0; i < N; ++i) 
    {
        cin >> heights[i];
    }

    stack<int> s;
    long long total = 0; 

    for (int i = 0; i < N; ++i) 
    {
        while (!s.empty() && heights[s.top()] <= heights[i]) 
        {
            s.pop();
        }
        total += s.size();
        s.push(i);
    }

    cout << total << "\n";
}