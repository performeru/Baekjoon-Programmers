#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

void bfs(int node);
static vector<vector<int>> a;
static vector<int> answer;
static vector<int> visited; 

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long n, m, k, x;
    cin >> n >> m >> k >> x;
    a.resize(n + 1);
    
    for (int i = 0; i < m; i++)
    {
        int s, e;
        cin >> s >> e;
        a[s].push_back(e);
    }
    
    visited.resize(n + 1);
    
    for (int i = 0; i <= n; i++)
    {
        visited[i] = -1;
    }
    
    bfs(x);
    
    for (int i = 0; i <= n; i++)
    {
        if (visited[i] == k)
        {
            answer.push_back(i);
        }
    }
    if (answer.empty())
    {
        cout << -1 << '\n';
    }
    else
    {
        sort(answer.begin(), answer.end());
        for (int temp : answer)
        {
            cout << temp << '\n';
        }
    }
    
    return 0;
}

void bfs(int node)
{
    queue<int> qu;
    qu.push(node);
    visited[node]++; 
    
    while (!qu.empty())
    {
        int now_node = qu.front();
        qu.pop();
        for (int i : a[now_node])
        {
            if (visited[i] == -1)
            {
                visited[i] = visited[now_node] + 1;
                qu.push(i);
            }
        }
    }
}
