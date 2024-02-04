#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) 
{
    int answer = 0;
    
    for(int i = 0; i <= 9; i++)
    {
        bool found = false;
        for(int j = 0; j < numbers.size(); j++)
        {
            if(i == numbers[j])
            {
                found = true;
            }
        }
        
        if(!found)
        {
           answer += i; 
        }
    }
    
    return answer;
}