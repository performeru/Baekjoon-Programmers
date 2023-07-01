#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::cin >> str;

    for (char& c : str)
    {
        if (c >= 'a' && c <= 'z')
        {
            c = c - 'a' + 'A'; 
        }
        else if (c >= 'A' && c <= 'Z')
        {
            c = c - 'A' + 'a'; 
        }
    }

    std::cout << str;

    return 0;
}