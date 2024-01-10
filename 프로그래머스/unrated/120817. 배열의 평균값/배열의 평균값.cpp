#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) 
{
    double sum{};
    
    for(auto num : numbers)
    {
         sum += num;
    }
    
    double answer = sum / numbers.size();
    
    return answer;
}