#include <string>

using namespace std;

string solution(string my_string) 
{
    string answer = "";  
    string vowels = "aeiou";
 
    for (char c : my_string) 
    {
        if (vowels.find(c) == string::npos) 
        {
            answer += c;
        }
    }
    return answer;
}