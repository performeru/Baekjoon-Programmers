#include <iostream>

using namespace std;

int solution(int n)
{
    int answer = 0;
    
    string strN = to_string(n);
    
    for (char digit : strN) 
    {
        answer += digit - '0';  
    }
    
    return answer;
}