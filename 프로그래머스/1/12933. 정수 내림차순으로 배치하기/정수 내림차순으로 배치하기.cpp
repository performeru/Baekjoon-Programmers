#include <string>
#include <algorithm>
#include <vector>


using namespace std;

long long solution(long long n) 
{
    string str = to_string(n);
    sort(str.begin(), str.end(), greater<char>());
    long long answer = stoll(str);
    
    return answer;
}