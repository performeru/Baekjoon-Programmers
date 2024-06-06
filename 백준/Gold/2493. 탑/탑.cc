#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> heights(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> heights[i];
    }
    
    stack<int> s;  
    vector<int> result(n, 0);  
    
    for (int i = 0; i < n; i++) 
    {
        while (!s.empty() && heights[s.top()] < heights[i])
        {
            s.pop();  
        }
        
        if (!s.empty())
        {
            result[i] = s.top() + 1;  
        }
        
        s.push(i);  
    }
    
    for (int i = 0; i < n; i++) 
    {
        cout << result[i] << " ";
    }
    
}