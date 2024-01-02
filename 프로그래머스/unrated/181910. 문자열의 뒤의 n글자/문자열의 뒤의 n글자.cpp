#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) 
{
    int my_string_length = my_string.length();
 
    string answer = "";

    answer = my_string.substr(my_string_length - n, my_string_length);

    return answer;
}