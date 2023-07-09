#include <iostream>

int main() 
{
    std::string str;
    std::cin >> str;

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

    std::cout << str << std::endl;

    return 0;
}
   
