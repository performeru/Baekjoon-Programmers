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
    getline(cin, s); 
    string result;
    stack<char> word;
    bool insideTag = false;

    for (char c : s) 
    {
        if (c == '<') 
        {
            while (!word.empty()) 
            {
                result += word.top();
                word.pop();
            }
            insideTag = true;
            result += c; 
        } 
        else if (c == '>') 
        {
            insideTag = false;
            result += c;
        } 
        else if (insideTag) 
        {
            result += c; 
        }
        else
        {
            if (c == ' ') 
            {
                while (!word.empty()) 
                {
                    result += word.top();
                    word.pop();
                }
                result += c; 
            } 
            else 
            {
                word.push(c); 
            }
        }
    }

    while (!word.empty()) 
    {
        result += word.top();
        word.pop();
    }

    cout << result << "\n";

}