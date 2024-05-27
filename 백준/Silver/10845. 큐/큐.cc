#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    
    queue<int> Q;
    
    while(N--)
    {
        string q;
        cin >> q;
        
        if("push" == q)
        {
            int num1;
            cin >> num1;
            Q.push(num1);
        }
        else if("pop" == q)
        {
            if(Q.empty())
            {
                cout << "-1" << "\n";
            }
            else
            {
                cout << Q.front() << "\n";
                Q.pop();
            }
        }
        else if("size" == q)
        {
            cout << Q.size() << "\n";
        }
        else if("empty" == q)
        {
            if(Q.empty())
            {
                cout << "1" << "\n";
            }
            else
            {
                cout << "0" << "\n";
            }
        }
        else if("front" == q)
        {
            if(Q.empty())
            {
                cout << "-1" << "\n";
            }
            else
            {
                cout << Q.front() << "\n";
            }
        }
        else if("back" == q)
        {
            if(Q.empty())
            {
                cout << "-1" << "\n";
            }
            else
            {
                cout << Q.back() << "\n";
            }
        }
    }
}