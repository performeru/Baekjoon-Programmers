#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    stack<int> cmd;

    while(N--)
    {
        int str;
        cin >> str;

        if(1 == str)
        {
            int ph;
            cin >> ph;
            cmd.push(ph);
        }
        else if(2 == str)
        {
            if(cmd.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << cmd.top() << "\n";
                cmd.pop();
            }
        }
        else if(3 == str)
        {
            cout << cmd.size() << "\n";
        }
        else if(4 == str)
        {
            if(cmd.empty())
            {
                cout << 1 << "\n";
            }
            else 
            {
                cout << 0 << "\n";
            }
        }
        else if(5 == str)
        {
            if(!cmd.empty())
            {
                cout << cmd.top() << "\n";
            }
            else
            {
                cout << -1 << "\n";
            }
        }
    }

}