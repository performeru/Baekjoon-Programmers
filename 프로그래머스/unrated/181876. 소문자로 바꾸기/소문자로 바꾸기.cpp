#include <string>
#include <cctype>

using namespace std;

string solution(string myString) 
{
    for(char &c : myString)
    {
        c = tolower(c);
    }
    return myString;
}