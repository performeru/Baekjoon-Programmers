#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) 
{
    int answer = 0;

    for (const string& skill_tree : skill_trees) 
    {
        string filtered_skill;

        for (char s : skill_tree) 
        {
            if (skill.find(s) != string::npos) 
            {
                filtered_skill += s;
            }
        }

        if (skill.compare(0, filtered_skill.size(), filtered_skill) == 0) 
        {
            answer++;
        }
    }

    return answer;
}
