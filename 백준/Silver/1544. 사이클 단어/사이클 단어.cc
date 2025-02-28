#include <iostream>
#include <vector>
#include <set>
#include <string>

using namespace std;

bool isCycleWord(const string& a, const string& b) 
{
    if (a.size() != b.size()) 
    {
        return false;
        
    }
    string extended = a + a;
    return extended.find(b) != string::npos; 
}

int main() 
{
    int N;
    cin >> N;
    vector<string> words(N);
    
    for (int i = 0; i < N; i++) 
    {
        cin >> words[i];
    }
    
    set<string> distinctWords; 
    
    for (int i = 0; i < N; i++) 
    {
        string currentWord = words[i];
        bool isNewCycle = true;
        
        for (const string& w : distinctWords) 
        {
            if (isCycleWord(w, currentWord)) 
            {
                isNewCycle = false;
                break;
            }
        }
        
        if (isNewCycle) 
        {
            distinctWords.insert(currentWord); 
        }
    }
    
    cout << distinctWords.size() << '\n';

}
