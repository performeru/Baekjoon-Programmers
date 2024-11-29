#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) 
{
    unordered_map<string, int> wantMap;  
    
    for (size_t i = 0; i < want.size(); i++) 
    {
        wantMap[want[i]] = number[i];
    }

    int totalDays = 0;
    int n = discount.size();
    int m = 10; 

    unordered_map<string, int> currentMap;
    
    for (int i = 0; i < m && i < n; i++) 
    {
        currentMap[discount[i]]++;
    }

    auto isValid = [&]() -> bool 
    {
        for (const auto& item : wantMap) 
        {
            if (currentMap[item.first] < item.second) 
            {
                return false;
            }
        }
        return true;
    };

    if (isValid()) totalDays++;

    for (int i = m; i < n; i++) 
    {
        currentMap[discount[i - m]]--;
        if (currentMap[discount[i - m]] == 0) 
        {
            currentMap.erase(discount[i - m]);
        }

        currentMap[discount[i]]++;

        if (isValid())
        {
            totalDays++;
    
        }
    }
    return totalDays;
}