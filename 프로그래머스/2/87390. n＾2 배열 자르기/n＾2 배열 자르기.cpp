#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, long long left, long long right) 
{
    vector<int> answer;
    
    for(long long index = left; index <= right; index++)
    {
        long long row = index / n;
        long long col = index % n;
        answer.push_back(max(row, col) + 1);
    }
    
    
    return answer;
}