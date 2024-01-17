#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) 
{
    int multiplyResult = 1;
    int sum = 0;
    
    for(int i = 0; i < num_list.size(); i++)
    {
        multiplyResult *= num_list[i];
        sum += num_list[i];
    }
    
    int squareOfSum = sum * sum;
  
    if (multiplyResult < squareOfSum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}