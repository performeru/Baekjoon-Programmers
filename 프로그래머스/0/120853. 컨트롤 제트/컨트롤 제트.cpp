#include <string>
#include <stack>
#include <sstream>

using namespace std;

int solution(string s) 
{
    stack<int> st;
    stringstream ss(s);
    string token;

    while (ss >> token) 
    {
        if (token == "Z") 
        {
            if (!st.empty()) 
            {
                st.pop();  
            }
        } 
        else 
        {
            st.push(stoi(token));  
        }
    }

    int sum = 0;
    
    while (!st.empty()) 
    {
        sum += st.top();
        st.pop();
    }

    return sum;
}