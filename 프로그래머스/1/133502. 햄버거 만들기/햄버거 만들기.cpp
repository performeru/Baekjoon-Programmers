#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<int> ingredient) 
{
    stack<int> st;
    int count = 0;
    
    for(auto i : ingredient)
    {
        st.push(i);
        
        if(st.size() >= 4)
        {
            int fourth = st.top(); st.pop();
            int third = st.top(); st.pop();
            int second = st.top(); st.pop();
            int first = st.top(); st.pop();
        
            if (first == 1 && second == 2 && third == 3 && fourth == 1) 
            {
                count++;
            } 
            else 
            {
                st.push(first);
                st.push(second);
                st.push(third);
                st.push(fourth);
            }
        }
    }
    
    return count;
}