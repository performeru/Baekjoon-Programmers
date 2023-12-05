#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() 
{
    char word[1000001];
    int count[26] = {0}; 

    cin.getline(word, sizeof(word)); 

    int len = strlen(word);

    for (int i = 0; i < len; i++) 
    {
        if (isalpha(word[i])) 
        {
            if (word[i] >= 'a' && word[i] <= 'z') 
            {
                count[word[i] - 'a']++;
            } 
            else
            {
                count[word[i] - 'A']++;
            }
        }
    }

    int maxCount = 0;
    char result = '?';

    for (int i = 0; i < 26; i++) 
    {
        if (count[i] > maxCount)
        {
            maxCount = count[i];
            result = 'A' + i;
        } 
        else if (count[i] == maxCount) 
        {
            result = '?';
        }
    }
    cout << result << endl;

}
