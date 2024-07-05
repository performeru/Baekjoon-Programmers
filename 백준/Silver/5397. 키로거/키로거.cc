#include <iostream>
#include <algorithm> 
#include <stack>

using namespace std;

void process_keystrokes(const string& keystrokes) 
{
    stack<char> left_stack;
    stack<char> right_stack;
    
    for (char ch : keystrokes) 
    {
        if (ch == '-') 
        {
            if (!left_stack.empty()) 
            {
                left_stack.pop();
            }
        } 
        else if (ch == '<')
        {
            if (!left_stack.empty()) 
            {
                right_stack.push(left_stack.top());
                left_stack.pop();
            }
        }
        else if (ch == '>')
        {
            if (!right_stack.empty()) 
            {
                left_stack.push(right_stack.top());
                right_stack.pop();
            }
        }
        else 
        {
            left_stack.push(ch);
        }
    }

    string result;
    while (!left_stack.empty()) 
    {
        result.push_back(left_stack.top());
        left_stack.pop();
    }
    reverse(result.begin(), result.end());
    while (!right_stack.empty()) 
    {
        result.push_back(right_stack.top());
        right_stack.pop();
    }

    cout << result << "\n";
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int test_cases;
    cin >> test_cases;
    cin.ignore(); 
    
    for (int i = 0; i < test_cases; ++i) 
    {
        string keystrokes;
        getline(cin, keystrokes);
        process_keystrokes(keystrokes);
    }

}