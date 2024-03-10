#include <iostream>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    char chessboard[8][8];
    
    for (int i = 0; i < 8; ++i) 
    {
        for (int j = 0; j < 8; ++j) 
        {
            cin >> chessboard[i][j];
        }
    }
    
    int white_pieces = 0; 

    for (int i = 0; i < 8; ++i) 
    {
        for (int j = 0; j < 8; ++j) 
        {
            if ((i + j) % 2 == 0 && chessboard[i][j] == 'F') 
            {
                white_pieces++;
            }
        }
    }
    
    cout << white_pieces << "\n";
}