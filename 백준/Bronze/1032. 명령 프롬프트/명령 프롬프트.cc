#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<string> filenames(n);
    
    for (int i = 0; i < n; ++i) 
    {
        cin >> filenames[i];
    }
    
    int len = filenames[0].size();
    string pattern(len, '?');
    
    for (int i = 0; i < len; ++i) 
    {
        char current = filenames[0][i];
        bool same = true;
        
        for (int j = 1; j < n; ++j) 
        {
            if (filenames[j][i] != current) 
            {
                same = false;
                break;
            }
        }
        
        if (same) 
        {
            pattern[i] = current;
        }
    }
    
    cout << pattern << "\n";
    
}