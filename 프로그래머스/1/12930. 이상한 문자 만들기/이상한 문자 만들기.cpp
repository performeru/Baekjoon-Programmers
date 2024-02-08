#include <string>
#include <vector>

using namespace std;

string solution(string s) 
{
    string answer = "";
    vector<string> words;
    string word = "";
    
    for(char c : s)
    {
        if(c == ' ')
        {
            words.push_back(word);
            word = "";
        }
        else
        {
            word += c;
        }
    }
    words.push_back(word);
    
    for (string word : words) 
    {
        for (int i = 0; i < word.length(); ++i) 
        {
            if (i % 2 == 0) 
            {
                answer += toupper(word[i]);
            } 
            else
            {
                answer += tolower(word[i]);
            }
        }
        answer += ' ';
    }

  
    return answer.substr(0, answer.length() - 1);
}