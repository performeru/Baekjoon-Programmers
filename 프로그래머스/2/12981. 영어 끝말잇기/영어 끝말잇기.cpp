#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> solution(int n, vector<string> words) 
{
    unordered_set<string> used_words;
    string last_word = "";
    
    for (int i = 0; i < words.size(); i++) 
    {
        string current_word = words[i];

        if ((i > 0 && last_word.back() != current_word.front()) || 
            used_words.find(current_word) != used_words.end()) 
        {
            int person = (i % n) + 1; 
            int turn = (i / n) + 1;   
            return {person, turn};
        }

        used_words.insert(current_word);
        last_word = current_word;
    }

    return {0, 0};
}