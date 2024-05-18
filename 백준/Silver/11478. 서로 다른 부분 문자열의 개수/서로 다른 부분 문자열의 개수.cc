#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    string input;
    cin >> input;
    
    set<string> substrings;
    
    for(int i = 0; i < input.size(); i++)
    {
        for(int j = 1; j <= input.size() - i; j++) 
        {
            substrings.insert(input.substr(i, j));
        }
    }

    int unique_count = substrings.size();
    
    cout << unique_count << "\n";
    
}