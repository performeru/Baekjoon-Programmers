#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 비교 함수 정의
bool compare(const string& a, const string& b) 
{
    if (a.length() == b.length())
    { 
        return a < b;
    }
    else
    {
        return a.length() < b.length(); 
    }
       
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<string> words;
    
    for(int i = 0; i < n; i++) 
    {
        string word;
        cin >> word;
        words.push_back(word);
    }
    
    sort(words.begin(), words.end(), compare);
    
    for (int i = 0; i < words.size(); ++i) 
    {
        if (i > 0 && words[i] == words[i - 1])
        {    
            continue;
        }
        cout << words[i] << "\n";
    }
    
}