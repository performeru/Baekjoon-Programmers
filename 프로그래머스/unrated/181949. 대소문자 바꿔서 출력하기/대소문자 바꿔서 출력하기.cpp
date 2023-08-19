#include <iostream>
using namespace std;

int main() 
{
    string str;
    
    cin >> str;

    for (char& ch : str) 
    {
        if (ch >= 'a' && ch <= 'z') 
        {
            ch = ch - 'a' + 'A';
        } 
        else if (ch >= 'A' && ch <= 'Z') 
        {
            ch = ch - 'A' + 'a';
        }
    }

    cout << str << std::endl;

    return 0;
}
   
