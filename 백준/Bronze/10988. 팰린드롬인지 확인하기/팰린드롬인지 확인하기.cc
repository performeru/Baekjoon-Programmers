#include <iostream>

using namespace std;

int main() 
{
    char word[101];  
    int len = 0;
    bool IsPalindrome = true;

    cin >> word;

    while (word[len] != '\0')
    {
        len++;
    }

    for(int i = 0; i < len / 2; i++) 
    {
        if (word[i] != word[len - 1 - i]) 
        {
            IsPalindrome = false;
            break;
        }
    }

    if (IsPalindrome) 
    {
        cout << '1';
    }
    else 
    {
        cout << '0'; 
    }
}

