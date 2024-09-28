#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    cin >> N >> M;

    vector<string> board(N);
    
    for (int i = 0; i < N; i++) 
    {
        cin >> board[i];
    }

    int count = 0;

    for (int i = 0; i < N; i++) 
    {
        bool is_plank = false;
        for (int j = 0; j < M; j++) 
        {
            if (board[i][j] == '-' && !is_plank) 
            {
                is_plank = true;
                count++;
            } 
            else if (board[i][j] != '-' && is_plank) 
            {
                is_plank = false;
            }
        }
    }

    for (int j = 0; j < M; j++) 
    {
        bool is_plank = false;
        for (int i = 0; i < N; i++) 
        {
            if (board[i][j] == '|' && !is_plank) 
            {
                is_plank = true;
                count++;
            } 
            else if (board[i][j] != '|' && is_plank) 
            {
                is_plank = false;
            }
        }
    }

    cout << count << '\n';

}