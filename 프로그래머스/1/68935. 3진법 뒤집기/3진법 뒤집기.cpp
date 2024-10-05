#include <string>
#include <algorithm>

using namespace std;

int solution(int n) 
{
    string ternary = "";
    while (n > 0) 
    {
        ternary += to_string(n % 3);  
        n /= 3;  
    }
    
    reverse(ternary.begin(), ternary.end());
    
    int answer = 0;
    int power = 1; 
    
    for (int i = 0; i < ternary.size(); i++) 
    {
        answer += (ternary[i] - '0') * power; 
        power *= 3;  
    }
    
    return answer;  
}