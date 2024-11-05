#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int start = 1;
    int answer = 0;
    
    while (start <= n) 
    {
        int sum = 0;
        for (int i = start; sum < n; i++) 
        {
            sum += i;
            if (sum == n) 
            {
                answer++;
            }
        }
        start++;
    }
    
    return answer;
}