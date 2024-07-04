#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    stack<char> str;
    
    for (char ch : s) 
    {
        if (ch == '(') 
        {
            str.push(ch);
        }
        else if (ch == ')')
        {
            if (str.empty())
            {
                return false;
            }
            else
            {
                str.pop();
            }
        }
    }
    return str.empty();
}