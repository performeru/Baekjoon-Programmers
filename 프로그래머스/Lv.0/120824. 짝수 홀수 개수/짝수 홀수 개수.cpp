#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) 
{
    int evencount {};
    int oddcount {};
    
    for(auto num : num_list)
    {
        if(num % 2 ==0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
    }
    vector<int> answer = {evencount, oddcount};
    return answer;
}