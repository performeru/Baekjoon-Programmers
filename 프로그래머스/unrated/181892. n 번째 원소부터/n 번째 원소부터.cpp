#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) 
{
    int start = n - 1;
    int end = num_list.size() - 1;

    vector<int> answer(num_list.begin() + start, num_list.end());

    return answer;
}