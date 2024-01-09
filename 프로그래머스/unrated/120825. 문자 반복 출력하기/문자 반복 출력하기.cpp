#include <string>

using namespace std;

string solution(string my_string, int n) 
{
    string answer = "";
    
    for(char c : my_string)
    {
        answer += string(n, c);
    }
    return answer;
}
