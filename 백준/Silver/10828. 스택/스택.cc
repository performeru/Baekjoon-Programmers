#include <iostream>
#include <stack>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    stack<int> stk;

    while (n--) 
    {
        string command;
        cin >> command;

        if (command == "push") 
        {
            int num;
            cin >> num;
            stk.push(num);
        } 
        else if (command == "pop") 
        {
            if (stk.empty()) 
            {
                cout << -1 << "\n";
            } 
            else 
            {
                cout << stk.top() << "\n";
                stk.pop();
            }
        }
        else if (command == "size")
        {
            cout << stk.size() << "\n";
        }
        else if (command == "empty") 
        {
            cout << (stk.empty() ? 1 : 0) << "\n";
        }
        else if (command == "top") 
        {
            if (stk.empty())
            {
                cout << -1 << "\n";
            }
            else 
            {
                cout << stk.top() << "\n";
            }
        }
    }

}