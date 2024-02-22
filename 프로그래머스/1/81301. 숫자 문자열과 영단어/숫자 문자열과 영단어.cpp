#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(string s) 
{
    map<string, string> word_to_num =
    {
        {"zero", "0"},
        {"one", "1"},
        {"two", "2"},
        {"three", "3"},
        {"four", "4"},
        {"five", "5"},
        {"six", "6"},
        {"seven", "7"},
        {"eight", "8"},
        {"nine", "9"}
    };
    string answer = "";
    string temp = "";
    
    for(auto c : s)
    {
        if(isdigit(c))
        {
            answer += c;
        }
        else
        {
            temp += c;
        }
        
        if(word_to_num.find(temp) != word_to_num.end())
        {
            answer += word_to_num[temp];
            temp = "";
        }
        
    }
    
    return stoi(answer);
}