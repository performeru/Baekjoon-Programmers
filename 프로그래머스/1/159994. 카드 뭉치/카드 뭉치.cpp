#include <string>
#include <vector>
#include <unordered_set>

using namespace std;




bool canConstruct(vector<string>& cards1, vector<string>& cards2, 
vector<string>& goal, int idx1, int idx2, int goalIdx, unordered_set<string>& used) 
{
    if (goalIdx == goal.size())
    {
        return true;
    }
     
    string word = goal[goalIdx];
    if (idx1 < cards1.size() && cards1[idx1] == word) 
    {
        if (used.find(word) == used.end()) 
        {
            used.insert(word);
            if (canConstruct(cards1, cards2, goal, idx1 + 1, idx2, goalIdx + 1, used))
            {
                return true;
            }
            used.erase(word);
        }
    }
    
    if (idx2 < cards2.size() && cards2[idx2] == word) 
    {
        if (used.find(word) == used.end()) 
        {
            used.insert(word);
            if (canConstruct(cards1, cards2, goal, idx1, idx2 + 1, goalIdx + 1, used))
            {
                return true;
            }
            used.erase(word);
        }
    }
    
    return false;
}

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal)
{
    unordered_set<string> used;
    if (canConstruct(cards1, cards2, goal, 0, 0, 0, used))
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}