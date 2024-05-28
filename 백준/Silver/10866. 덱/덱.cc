#include <iostream>
#include <deque>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    deque<int> DQ;
    
    int N;
    cin >> N;
    
    while(N--)
    {
        string q;
        cin >> q;
        
        if("push_front" == q)
        {
            int num;
            cin >> num;
            DQ.push_front(num);
        }
        else if("push_back" == q)
        {
            int num;
            cin >> num;
            DQ.push_back(num);
        }
        else if("pop_front" == q)
        {
            if(DQ.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << DQ.front() << "\n";
                DQ.pop_front();
            }
        }
        else if("pop_back" == q)
        {
            if(DQ.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << DQ.back() << "\n"; 
                DQ.pop_back();            
            }
        }
        else if("size" == q)
        {
            cout << DQ.size() << "\n";
        }
        else if("empty" == q)
        {
            if(DQ.empty())
            {
                cout << 1 << "\n";
            }
            else
            {
                cout << 0 << "\n";
            }
        }
        else if("front" == q)
        {
            if(DQ.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << DQ.front() << "\n";
            }
        }
        else if("back" == q)
        {
            if(DQ.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << DQ.back() << "\n"; 
            }
        }
    }

}