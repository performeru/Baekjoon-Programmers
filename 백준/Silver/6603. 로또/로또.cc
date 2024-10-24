#include <iostream>
#include <vector>

using namespace std;

void backtrack(const vector<int>& S, vector<int>& combination, int start, int depth) 
{
    if (depth == 6) 
    {
        for (int i = 0; i < 6; i++) 
        {
            cout << combination[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = start; i < S.size(); i++) 
    {
        combination[depth] = S[i];
        backtrack(S, combination, i + 1, depth + 1); 
    }
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    while (true) 
    {
        int k;
        cin >> k;
        
        if (k == 0)
        {
            break; 
        }
        
        vector<int> S(k);
        
        for (int i = 0; i < k; i++) 
        {
            cin >> S[i]; 
        }

        vector<int> combination(6); 
        backtrack(S, combination, 0, 0); 
        cout << '\n'; 
    }

}
