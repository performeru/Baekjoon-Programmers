#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    while(true)
    {
        string str;
        getline(cin, str);
        
        if("." == str)
        {
            break;
        }
        
        stack<char> s;
        bool isVal = true;
        
        for(auto c : str)
        {
            if(c == '(' || c == '[')
            {
                s.push(c);
            }
            
            else if(c == ')')
            {
                if(s.empty() || s.top() != '(')
                {
                    isVal = false;
                    break;
                }
                s.pop();
            }
            else if(c == ']')
            {
                if(s.empty() || s.top() != '[')
                {
                    isVal = false;
                    break;
                }
                s.pop();
            }
        }
        if(!s.empty())
        {
            isVal = false;
        }
        
        if(isVal)
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }     
    }
   
}