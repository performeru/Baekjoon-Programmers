#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm> 

using namespace std;

int solution(int k, vector<int> tangerine) 
{
    unordered_map<int, int> CountMap;
    
    for (int size : tangerine) 
    {
        CountMap[size]++;
    }
    
    vector<int> count;
    
    for (const auto& entry : CountMap) 
    {
        count.push_back(entry.second);
    }
    
    sort(count.begin(), count.end(), greater<int>());
    
    int total = 0;
    int answer = 0;
    
    for (int c : count) 
    {
        total += c;
        answer++;
        if (total >= k) 
        {
            break;
        }
    }

    return answer;
}