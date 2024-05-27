#include <iostream>
#include <list>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string N;
    cin >> N;
    
    list<char> L;
    auto cursor = L.end();
    
    for(auto c : N)
    {
        L.push_back(c);
    }
  
    int count;
    cin >> count;
    
    while(count--)
    {
        char op;
        cin >> op;
        
        if('P' == op)
        {
            char add;
            cin >> add;
            
            L.insert(cursor, add);
        }
        else if('L' == op)
        {
            if(cursor != L.begin())
            {
                cursor--;
            }
        }
        else if('B' == op)
        {
            if(cursor != L.begin())
            {
                cursor--;
                cursor = L.erase(cursor);
            }
        }
        else if('D' == op)
        {
            if(cursor != L.end())
            {
                cursor++;
            }
        }
    }
    
    for(auto c : L)
    {
        cout << c;
    }
}