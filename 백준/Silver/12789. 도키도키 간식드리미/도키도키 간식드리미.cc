#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;

    vector<int> students(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> students[i];
    }

    stack<int> waiting; 
    int current = 1;    

    for (int i = 0; i < n; i++) 
    {
        while (!waiting.empty() && waiting.top() == current) 
        {
            waiting.pop();
            current++;
        }

        if (students[i] == current) 
        {
            current++;
        } 
        else 
        {
            waiting.push(students[i]);
        }
    }

    while (!waiting.empty() && waiting.top() == current) 
    {
        waiting.pop();
        current++;
    }

    if (current == n + 1) 
    {
        cout << "Nice" << "\n";
    } 
    else 
    {
        cout << "Sad" << "\n";
    }

}