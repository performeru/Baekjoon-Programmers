#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Edge 
{
    int u, v, w;
    bool operator<(const Edge& other) const 
    {
        return w < other.w;
    }
};

int findParent(vector<int>& parent, int x) 
{
    if (parent[x] != x) 
    {
        parent[x] = findParent(parent, parent[x]);
    }
    return parent[x];
}

void unionSets(vector<int>& parent, vector<int>& rank, int u, int v) 
{
    int pu = findParent(parent, u);
    int pv = findParent(parent, v);
    
    if (pu != pv) 
    {
        if (rank[pu] > rank[pv]) 
        {
            parent[pv] = pu;
        } 
        else if (rank[pu] < rank[pv]) 
        {
            parent[pu] = pv;
        } 
        else 
        {
            parent[pv] = pu;
            rank[pu]++;
        }
    }
}

string solve(int N, int M, int p, int q, vector<Edge>& edges) 
{
    vector<int> parent(N + 1);
    vector<int> rank(N + 1, 0);
    
    for (int i = 1; i <= N; ++i) 
    {
        parent[i] = i;
    }

    sort(edges.begin(), edges.end());

    int mstCost = 0;
    bool pqEdgeUsed = false;

    for (Edge& edge : edges) 
    {
        if (findParent(parent, edge.u) != findParent(parent, edge.v)) 
        {
            unionSets(parent, rank, edge.u, edge.v);
            mstCost += edge.w;
            
            if ((edge.u == p && edge.v == q) || (edge.u == q && edge.v == p)) 
            {
                pqEdgeUsed = true;
            }
        }
    }

    if (pqEdgeUsed) 
    {
        return "YES";
    } 
    else 
    {
        return "NO";
    }
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) 
    {
        int N, M, p, q;
        cin >> N >> M >> p >> q;

        vector<Edge> edges(M);
        
        for (int i = 0; i < M; ++i) 
        {
            cin >> edges[i].u >> edges[i].v >> edges[i].w;
        }

        cout << solve(N, M, p, q, edges) << "\n";
    }

}