#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int N;
    cin >> N;

    int count = N; 
    
    for (int i = 0; i < N; ++i) 
    {
        string word;
        cin >> word;

        bool visited[26] = { false };  

        for (int j = 0; j < word.length(); ++j) 
        {
            if (visited[word[j] - 'a']) 
            { 
                if (word[j - 1] != word[j]) 
                {  
                    count--;  
                    break;
                }
            } 
            else
            {
                visited[word[j] - 'a'] = true;  
            }
        }
    }
    cout << count << endl;
}