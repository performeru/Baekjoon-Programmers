#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int L, C;
vector<char> letters;
vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
vector<string> results;

bool isVowel(char c) 
{
    return find(vowels.begin(), vowels.end(), c) != vowels.end();
}

void backtrack(string combination, int idx, int vowelCount, int consonantCount) 
{
    if (combination.size() == L) 
    {
        if (vowelCount >= 1 && consonantCount >= 2) 
        {
            results.push_back(combination);
        }
        return;
    }

    for (int i = idx; i < C; i++) 
    {
        char current = letters[i];
        
        if (isVowel(current)) 
        {
            backtrack(combination + current, i + 1, vowelCount + 1, consonantCount);
        } 
        else 
        {
            backtrack(combination + current, i + 1, vowelCount, consonantCount + 1);
        }
    }
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> L >> C;
    letters.resize(C);
    
    for (int i = 0; i < C; i++) 
    {
        cin >> letters[i];
    }

    sort(letters.begin(), letters.end());

    backtrack("", 0, 0, 0);

    for (string result : results) 
    {
        cout << result << '\n';
    }


}
