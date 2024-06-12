#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo)     
{
    unordered_map<string, int> yearningMap;
    
    for (size_t i = 0; i < name.size(); i++) 
    {
        yearningMap[name[i]] = yearning[i];
    }

    vector<int> answer;

    for (const auto& p : photo) 
    {
        int score = 0;
        for (const auto& person : p) 
        {
            if (yearningMap.find(person) != yearningMap.end()) 
            {
                score += yearningMap[person];
            }
        }
        answer.push_back(score);
    }

    return answer;
}