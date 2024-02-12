#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2) 
{
    auto start = numbers.begin() + num1;
    auto end = numbers.begin() + num2 + 1;
    
    vector<int> answer(start, end);

    return answer;
}