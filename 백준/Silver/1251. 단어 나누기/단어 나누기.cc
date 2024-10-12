#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string word;
    cin >> word;
    
    string best = "";  

    for (int i = 1; i < word.size() - 1; ++i) 
    {
        for (int j = i + 1; j < word.size(); ++j) 
        {
            string part1 = word.substr(0, i);    
            string part2 = word.substr(i, j - i);
            string part3 = word.substr(j);       

            reverse(part1.begin(), part1.end());
            reverse(part2.begin(), part2.end());
            reverse(part3.begin(), part3.end());

            string combined = part1 + part2 + part3;

            if (best == "" || combined < best) 
            {
                best = combined;
            }
        }
    }

    cout << best << "\n";

}