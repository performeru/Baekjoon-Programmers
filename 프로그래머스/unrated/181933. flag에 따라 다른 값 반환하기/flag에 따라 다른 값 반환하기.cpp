#include <string>

using namespace std;

int solution(int a, int b, bool flag) 
{
    int result; 
    if(flag)
    {
        result = a+b;
        return result;
    }
    else
    {
        result = a-b; 
        return result;
    }
}