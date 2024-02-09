#include <string>

using namespace std;

string solution(string s) 
{
    string answer = "";
    for(int i = 0; i < s.length(); i++)
    {
        if(s.length() % 2 == 0)
        {
            answer = s.substr(s.length() / 2 - 1 ,2);
        }
        else
        {
            answer = s.substr(s.length() / 2, 1);
        }
    }
    return answer;
}
