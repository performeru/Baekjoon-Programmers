#include <string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    int count_p = 0, count_y = 0;
    
    for(auto c : s)
    {
        if(tolower(c) == 'p')
        {
            count_p++;
        }
        else if(tolower(c) == 'y')
        {
            count_y++;
        }
    }
    
    return count_p == count_y;
}