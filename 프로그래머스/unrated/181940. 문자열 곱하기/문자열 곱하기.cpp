#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int k) 
{
    string result = my_string;
    for (int i = 1; i < k; ++i) 
    {
        result += my_string;
    }
    
    return result;
}