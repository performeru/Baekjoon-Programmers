#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(string s) 
{
    vector<int> answer;
    unordered_map<int, int> counts;
    
    string numstr;
    for (char ch : s) 
    {
        if (isdigit(ch)) 
        {
            numstr += ch;
        } 
        else 
        {
            if (!numstr.empty()) 
            {
                int num = stoi(numstr);
                counts[num]++;
                numstr.clear();
            }
        }
    }
    
    vector<pair<int, int>> freqPairs(counts.begin(), counts.end());
    
    sort(freqPairs.begin(), freqPairs.end(), [](const pair<int, int>& a, const pair<int, int>& b) 
    {
        return a.second > b.second; 
    });
    
    for (const auto& p : freqPairs) 
    {
        answer.push_back(p.first);
    }
    
    return answer;
}
