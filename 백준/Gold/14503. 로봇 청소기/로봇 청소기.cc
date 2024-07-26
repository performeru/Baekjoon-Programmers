#include <iostream>
#include <vector>

using namespace std;

const int dr[4] = {-1, 0, 1, 0}; 
const int dc[4] = {0, 1, 0, -1}; 

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    cin >> N >> M;
    
    int r, c, d;
    cin >> r >> c >> d;
    
    vector<vector<int>> room(N, vector<int>(M));
    for (int i = 0; i < N; ++i) 
    {
        for (int j = 0; j < M; ++j)
        {
            cin >> room[i][j];
        }
    }
    
    vector<vector<bool>> cleaned(N, vector<bool>(M, false));
    int cleanCount = 0;
    
    while (true) 
    {
        if (!cleaned[r][c]) 
        {
            cleaned[r][c] = true;
            cleanCount++;
        }
        
        bool foundUncleaned = false;
        for (int i = 0; i < 4; ++i) 
        {
            d = (d + 3) % 4; 
            int nr = r + dr[d];
            int nc = c + dc[d];
            
            if (nr >= 0 && nr < N && nc >= 0 && nc < M && room[nr][nc] == 0 && !cleaned[nr][nc]) 
            {
                r = nr;
                c = nc;
                foundUncleaned = true;
                break;
            }
        }
        
        if (!foundUncleaned) 
        {
            int backDir = (d + 2) % 4;
            int br = r + dr[backDir];
            int bc = c + dc[backDir];
            
            if (br >= 0 && br < N && bc >= 0 && bc < M && room[br][bc] == 0) 
            {
                r = br;
                c = bc;
            } 
            else 
            {
                break;
            }
        }
    }
    
    cout << cleanCount << "\n";

}