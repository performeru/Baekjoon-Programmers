#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M, K;
    cin >> N >> M;
    
    vector<string> table(N);
    
    for (int i = 0; i < N; i++) 
    {
        cin >> table[i];
    }
    
    cin >> K;

    unordered_map<string, int> row_count;
    
    for (const auto& row : table) 
    {
        row_count[row]++;
    }

    int max_on_rows = 0;
    
    for (const auto& [row, count] : row_count) 
    {
        int zero_count = 0;
        
        for (char c : row) 
        {
            if (c == '0') zero_count++;
        }

        if (zero_count <= K && (K - zero_count) % 2 == 0)
        {
            max_on_rows = max(max_on_rows, count);
        }
    }

    cout << max_on_rows << '\n';
}
