#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<string> board(5);

    for (int i = 0; i < 5; ++i) 
    {
        cin >> board[i];
    }

    string result;

    for (int col = 0; col < 15; col++) 
    {
        for (int row = 0; row < 5; row++) 
        {
            if (col < board[row].size()) 
            {
                result += board[row][col];
            }
        }
    }

    cout << result << '\n';

}
