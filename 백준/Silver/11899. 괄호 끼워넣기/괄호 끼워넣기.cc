#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s;
    cin >> s;

    stack<char> st;
    int addClose = 0;  

    for (char ch : s) 
    {
        if (ch == '(') 
        {
            st.push(ch);
        }
        else
        {
            if (!st.empty() && st.top() == '(') 
            {
                st.pop();
            } 
            else 
            {
                addClose++;
            }
        }
    }

    int addOpen = st.size(); 

    cout << addClose + addOpen << "\n";
}