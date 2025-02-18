#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) 
{
    unordered_map<string, int> clothes_map;

    for (auto& c : clothes)
    {
        clothes_map[c[1]]++;
    }

    int answer = 1;
    
    for (auto& item : clothes_map) 
    {
        answer *= (item.second + 1);
    }

    return answer - 1;
}