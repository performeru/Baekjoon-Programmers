#include <string>
#include <vector>

using namespace std;

string solution(string myString) 
{
    for (char &c : myString) 
    {
        if (c == 'a') 
        {
            c = 'A'; 
        } 
        else if (c != 'A' && isupper(c)) 
        {
            c = tolower(c);  
        }
    }
    return myString;
}
