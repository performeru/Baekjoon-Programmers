#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{  
    if(n%2==1)
    {
        int odd_sum = 0;
        for (int i = 1; i <= n; i += 2)
        {
            odd_sum += i;
        }
        return odd_sum;
    } 
    else
    {
        int even_sum = 0;
        for (int i = 2; i <= n; i += 2) 
        {
            even_sum += i * i;
        }
        return even_sum;
    }
    
}