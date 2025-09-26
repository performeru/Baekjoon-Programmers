#include <iostream>
#include <stack>
#include <string>

using namespace std;

int minOperationsToStable(const string& s) 
{
    stack<char> st;
    int count = 0;

    for (char ch : s) 
    {
        if (ch == '{') 
        {
            st.push(ch);
        }
        else 
        { // ch == '}'
            if (!st.empty())
            {
                st.pop(); // 짝이 맞는 여는 괄호 제거
            }
            else
            {
                count++;      // 닫는 괄호를 여는 괄호로 바꾸는 연산
                st.push('{'); // 바꾼 괄호를 스택에 넣기
            }
        }
    }

    // 남은 여는 괄호는 닫는 괄호로 바꿔야 함
    count += st.size() / 2;
    return count;
}

int main() 
{
    string line;
    int testCase = 1;

    while (true) 
    {
        cin >> line;
        if (line[0] == '-') break;

        int result = minOperationsToStable(line);
        cout << testCase << ". " << result << endl;
        testCase++;
    }

}