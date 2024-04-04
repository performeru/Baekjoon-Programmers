#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) 
{
    string answer = "";
    
    int column = c - 1; 
    
    for (int i = column; i < my_string.length(); i += m) 
    {
        answer += my_string[i];
    }
    
    return answer;
}