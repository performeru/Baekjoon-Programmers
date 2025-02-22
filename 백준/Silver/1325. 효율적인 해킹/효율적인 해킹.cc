#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void BFS(int node);
static vector<vector<int>> a;
static vector<int> answer;
static vector<bool> visited;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long n, m;
    cin >> n >> m;
    a.resize(n + 1);
    answer.resize(n + 1);
    
    for(int i = 0; i < m; i++)
    {
        int s, e;
        cin >> s >> e;
        a[s].push_back(e);
    }
    
    visited.resize(n + 1);
    
    for(int i = 1; i <= n; i++)
    {
        fill(visited.begin(), visited.end(), false);
        BFS(i);
    }
    
    int maxval = 0;
    
    for(int i = 1; i <= n; i++)
    {
        maxval = max(maxval, answer[i]);
    }
    for(int i = 1; i <= n; i++)
    {
        if(answer[i] == maxval)
        {
            cout << i << " ";
        }
    }
}

void BFS(int index)
{
    queue<int> qu;
    qu.push(index);
    visited[index] = true;
    while(!qu.empty())
    {
        int now_node = qu.front();
        qu.pop();
        for(int i : a[now_node])
        {
            if(visited[i] == false)
            {
                visited[i] = true;
                answer[i]++;
                qu.push(i);
            }
        }
    }
}