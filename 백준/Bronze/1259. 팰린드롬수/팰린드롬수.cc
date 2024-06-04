#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(int number) 
{
    string str = to_string(number);
    string rev_str = string(str.rbegin(), str.rend());
    return str == rev_str;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int number;
    
    while (true) 
    {
        cin >> number;
        if (number == 0) 
        {
            break;
        }
        if (isPalindrome(number)) 
        {
            cout << "yes" << "\n";
        } 
        else 
        {
            cout << "no" << "\n";
        }
    }
}