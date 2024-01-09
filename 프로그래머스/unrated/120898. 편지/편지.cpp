#include <string>

using namespace std;

int solution(string message) 
{
    int lettersize = 2;
    int minlength = 0;
    
    for(auto c : message)
    {
        if(c == ' ')
        {
            minlength += lettersize;
        }
        else
        {
            minlength += lettersize;
        }
    }
    
    return minlength;
}