#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N; 
    cin.ignore(); 

    for (int i = 1; i <= N; ++i)
    {
        string line;
        getline(cin, line); 

        istringstream iss(line); 
        vector<string> words;
        string word;
        
        while (iss >> word) 
        {
            words.push_back(word);
        }

        cout << "Case #" << i << ": ";
        for (int j = words.size() - 1; j >= 0; --j) 
        {
            cout << words[j];
            if (j != 0) 
            {
                cout << " ";
            }
        }
        cout << "\n";
    }

}