#include <iostream>
#include <deque>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    deque<int> num;

    while (N--) 
    {
        int cmd;
        cin >> cmd;

        if (cmd == 1) 
        {
            int x;
            cin >> x;
            num.push_front(x); 
        }
        else if (cmd == 2) 
        {
            int y;
            cin >> y;
            num.push_back(y); 
        }
        else if (cmd == 3) 
        {
            if (!num.empty()) 
            {
                cout << num.front() << "\n"; 
                num.pop_front(); 
            }
            else 
            {
                cout << -1 << "\n";
            }
        }
        else if (cmd == 4) 
        {
            if (!num.empty()) 
            {
                cout << num.back() << "\n"; 
                num.pop_back(); 
            }
            else 
            {
                cout << -1 << "\n";
            }
        }
        else if (cmd == 5) 
        {
            cout << num.size() << "\n";
        }
        else if (cmd == 6) 
        {
            cout << (num.empty() ? 1 : 0) << "\n";
        }
        else if (cmd == 7) 
        {
            if (!num.empty()) 
            {
                cout << num.front() << "\n";
            }
            else
            {
                cout << -1 << "\n";
            }
        }
        else if (cmd == 8) 
        {
            if (!num.empty()) 
            {
                cout << num.back() << "\n";
            }
            else 
            {
                cout << -1 << "\n";
            }
        }
    }

}