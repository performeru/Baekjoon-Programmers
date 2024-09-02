#include <string>
#include <set>

using namespace std;

int dx[] = {0, 1, 0 , -1};
int dy[] = {-1, 0, 1, 0};

int solution(string dirs) 
{
    int x= 0, y = 0;
    
    set<pair<pair<int, int>, pair<int, int>>> visited;
    
    for (char dir : dirs) 
    {
        int nx = x, ny = y;
        
        if (dir == 'U') 
        {
            nx += dx[0];
            ny += dy[0];
        } 
        else if (dir == 'R') 
        {
            nx += dx[1];
            ny += dy[1];
        } 
        else if (dir == 'D') 
        {
            nx += dx[2];
            ny += dy[2];
        } 
        else if (dir == 'L') 
        {
            nx += dx[3];
            ny += dy[3];
        }
        
        if (nx < -5 || nx > 5 || ny < -5 || ny > 5) continue;
        
        visited.insert({{x, y}, {nx, ny}});
        visited.insert({{nx, ny}, {x, y}});

        x = nx;
        y = ny;
    }
    
    return visited.size() / 2;
}