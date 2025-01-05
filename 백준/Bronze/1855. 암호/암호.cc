#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int K;
    string encrypted;
    cin >> K >> encrypted;

    int rows = encrypted.size() / K;
    vector<string> table(rows, string(K, ' '));

    bool leftToRight = true;
    int idx = 0;

    for (int i = 0; i < rows; i++) 
    {
        if (leftToRight) 
        {
            for (int j = 0; j < K; j++) 
            {
                table[i][j] = encrypted[idx++];
            }
        } 
        else 
        {
            for (int j = K - 1; j >= 0; j--) 
            {
                table[i][j] = encrypted[idx++];
            }
        }
        leftToRight = !leftToRight;
    }

    string original;
    for (int j = 0; j < K; j++) 
    {
        for (int i = 0; i < rows; i++) 
        {
            original += table[i][j];
        }
    }

    cout << original << '\n';
}
