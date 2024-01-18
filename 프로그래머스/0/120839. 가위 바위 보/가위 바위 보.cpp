#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string rsp) 
{
    map<char, char> wincases
    {
        {'2', '0'},
        {'0', '5'},
        {'5', '2'}
    };
    
    string answer = "";
    
    for(auto c : rsp)
    {
        answer += wincases[c];
    }
    
    return answer;
}