#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string str;
    cin >> str;
    
    stack<char> s;
    int result = 0;
    
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == '(')
        {
            s.push('(');
        }
        else if(str[i] == ')')
        {
            s.pop();
            if (str[i - 1] == '(')
            {
                result += s.size();
            }
            else
            {
                result += 1;
            }
        }
    }
    cout << result << '\n';
}