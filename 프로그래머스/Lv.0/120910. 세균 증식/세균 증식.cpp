#include <string>

using namespace std;

int solution(int n, int t) 
{
    int count = n;
    
    for(int i = 1; i <= t; i++)
    {
        count *= 2;
    }

    return count;
}