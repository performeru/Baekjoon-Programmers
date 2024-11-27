#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n; 

    int goodWordCount = 0; 

    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;

        stack<char> s;
        
        for (char c : word) 
        {
            if (!s.empty() && s.top() == c) 
            {
                s.pop();
            } 
            else
            { 
                s.push(c);
            }
        }

        if (s.empty()) 
        {
            goodWordCount++;
        }
    }

    cout << goodWordCount << '\n'; 
}
