#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int solution(int x, int y, int n) 
{
    if (x == y) 
    {
        return 0;
    }
    
    queue<pair<int, int>> q;
    q.push({x, 0});
    
    vector<bool> visited(1000001, false);
    visited[x] = true;
    
    while (!q.empty()) 
    {
        int current = q.front().first;
        int step = q.front().second;
        q.pop();
        
        if (current + n <= 1000000 && !visited[current + n]) 
        {
            if (current + n == y) 
            {
                return step + 1;
            }
            q.push({current + n, step + 1});
            visited[current + n] = true;
        }
        
        if (current * 2 <= 1000000 && !visited[current * 2]) 
        {
            if (current * 2 == y) 
            {
                return step + 1;
            }
            q.push({current * 2, step + 1});
            visited[current * 2] = true;
        }
        
        if (current * 3 <= 1000000 && !visited[current * 3]) 
        {
            if (current * 3 == y) 
            {
                return step + 1;
            }
            q.push({current * 3, step + 1});
            visited[current * 3] = true;
        }
    }
    
    return -1; 
}