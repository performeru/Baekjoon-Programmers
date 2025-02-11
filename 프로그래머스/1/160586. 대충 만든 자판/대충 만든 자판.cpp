#include <string>
#include <vector>
#include <unordered_map>
#include <limits>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) 
{
    unordered_map<char, int> keyPressCount;
    
    for (int i = 0; i < keymap.size(); i++) 
    {
        for (int j = 0; j < keymap[i].size(); j++) 
        {
            char c = keymap[i][j];
            if (keyPressCount.find(c) == keyPressCount.end()) 
            {
                keyPressCount[c] = j + 1;
            } 
            else 
            {
                keyPressCount[c] = min(keyPressCount[c], j + 1);
            }
        }
    }

    vector<int> answer;
    
    for (const string &target : targets) 
    {
        int totalPress = 0;
        bool possible = true;
        
        for (char c : target) 
        {
            if (keyPressCount.find(c) == keyPressCount.end()) 
            {
                possible = false;
                break;
            } 
            else 
            {
                totalPress += keyPressCount[c];
            }
        }
        
        answer.push_back(possible ? totalPress : -1);
    }
    
    return answer;
}
