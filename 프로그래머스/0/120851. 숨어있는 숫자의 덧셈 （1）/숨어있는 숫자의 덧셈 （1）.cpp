#include <string>

using namespace std;

int solution(string my_string) 
{
    int answer = 0;
    
    for(int i = 0; i < my_string.size(); i++)
    {
        if(isdigit(my_string[i]))
        {
            answer += my_string[i] - '0';
        }
    }
    
    return answer;
}