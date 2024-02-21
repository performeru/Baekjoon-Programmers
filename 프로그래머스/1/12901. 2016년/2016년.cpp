#include <string>

using namespace std;

string solution(int a, int b) 
{
    int DaysInMonth[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string days[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    
    int TotalDays = 0;
    
    for (int i = 0; i < a - 1; i++) 
    {
        TotalDays += DaysInMonth[i]; 
    }
    
    TotalDays += b - 1;
    
    string answer = days[(TotalDays + 5) % 7];
    
    return answer;
}