#include <iostream>
#include <stack>

using namespace std;

bool isVPS(const string& ps) 
{
    stack<char> s;
    for (char ch : ps) 
    {
        if (ch == '(') 
        {
            s.push(ch);
        }
        else 
        {
            if (s.empty()) 
            {
                return false;
            }
            s.pop();
        }
    }
    return s.empty();
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) 
    {
        string ps;
        cin >> ps;
        if (isVPS(ps)) 
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    
}