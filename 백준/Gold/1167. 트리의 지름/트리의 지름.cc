#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int V;
vector<pair<int, int>> tree[100001]; 

pair<int, int> bfs(int start) 
{
    vector<int> dist(V + 1, -1); 
    queue<int> q;
    
    dist[start] = 0;
    q.push(start);
    
    int maxDist = 0;
    int maxNode = start;
    
    while (!q.empty()) 
    {
        int node = q.front();
        q.pop();
        
        for (auto &edge : tree[node]) 
        {
            int next = edge.first;
            int weight = edge.second;
            
            if (dist[next] == -1) 
            { 
                dist[next] = dist[node] + weight;
                q.push(next);
                
                if (dist[next] > maxDist) 
                {
                    maxDist = dist[next];
                    maxNode = next;
                }
            }
        }
    }
    return {maxNode, maxDist}; 
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> V;
    
    for (int i = 0; i < V; i++) 
    {
        int node;
        cin >> node;
        
        while (true) 
        {
            int adj, dist;
            cin >> adj;
            if (adj == -1) 
            {
                break;
            }
            cin >> dist;
            tree[node].push_back({adj, dist});
        }
    }

    pair<int, int> result1 = bfs(1);
    int farthestNode = result1.first;

    pair<int, int> result2 = bfs(farthestNode);
    int diameter = result2.second;
    
    cout << diameter << '\n';

}

