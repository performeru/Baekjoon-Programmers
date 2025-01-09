#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    priority_queue<int> pluspq;
    priority_queue<int, vector<int>, greater<int>> minpq; 
    int one = 0; 
    int zero = 0;
    
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        
        if (data > 1)
        {
            pluspq.push(data);
        }
        else if (data == 1)
        {
            one++;
        }
        else if (data == 0)
        {
            zero++;
        }
        else
        {
            minpq.push(data);
        }
    }
    
    int sum = 0;
    
    while (pluspq.size() > 1)
    {
        int first = pluspq.top();
        pluspq.pop();
        int second = pluspq.top();
        pluspq.pop();
        sum += first * second;
    }
    if (!pluspq.empty())
    {
        sum += pluspq.top();
    }
    
    while (minpq.size() > 1)
    {
        int first = minpq.top();
        minpq.pop();
        int second = minpq.top();
        minpq.pop();
        sum += first * second; 
    }
    if (!minpq.empty())
    {
        if (zero == 0)
        {
            sum += minpq.top();
        }
    }
    
    sum += one;
    cout << sum << '\n';
    
}
