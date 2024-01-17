#include <string>
#include <vector>

using namespace std;

int countOperations(int num) 
{
    if (num == 1) 
    {
        return 0;
    }

    if (num % 2 == 0) 
    {
        return 1 + countOperations(num / 2);
    } 
    else
    {
        return 1 + countOperations((num - 1) / 2);
    }
}

int solution(vector<int> num_list) 
{
    int answer = 0;
    
    for (int i = 0; i < num_list.size(); i++)
    {
        answer += countOperations(num_list[i]);   
    }
    return answer;
}