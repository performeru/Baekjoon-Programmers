#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int count_changes(const vector<string>& board, int row, int col, char start_color) 
{
    int changes = 0;
    for (int i = row; i < row + 8; i++) 
    {
        for (int j = col; j < col + 8; j++) 
        {
            char expected_color = (start_color == 'W') ? ((i + j) % 2 == 0 ? 'W' : 'B') : ((i + j) % 2 == 0 ? 'B' : 'W');
            
            if (board[i][j] != expected_color) 
            {
                changes++;
            }
        }
    }
    return changes;
}


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
    
    int min_changes = INT_MAX;

    for (int i = 0; i <= N - 8; i++) 
    {
        for (int j = 0; j <= M - 8; j++) 
        {
            int changes_for_white = count_changes(board, i, j, 'W');
            int changes_for_black = count_changes(board, i, j, 'B');

            min_changes = min(min_changes, min(changes_for_white, changes_for_black));
        }
    }
    
    cout << min_changes << '\n';

}