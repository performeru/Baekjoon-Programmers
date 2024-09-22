#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

const int INF = 1e6;  

vector<vector<int>> adj;  
vector<int> cost;  
vector<int> discovered, sccId;
stack<int> stk;
int sccCounter, vertexCounter;
vector<bool> finished;
vector<int> sccMinCost;

int dfs(int here) 
{
    int ret = discovered[here] = vertexCounter++;
    stk.push(here);
    
    for (int there = 0; there < adj[here].size(); ++there) 
    {
        if (adj[here][there]) 
        {
            if (discovered[there] == -1) 
            {
                ret = min(ret, dfs(there));
            }
            else if (!finished[there]) 
            {
                ret = min(ret, discovered[there]);
            }
        }
    }
    
    if (ret == discovered[here]) 
    {
        int sccMin = INF;
        
        while (true) 
        {
            int t = stk.top();
            stk.pop();
            finished[t] = true;
            sccId[t] = sccCounter;
            sccMin = min(sccMin, cost[t]); 
            if (t == here) break;
        }
        sccMinCost.push_back(sccMin); 
        sccCounter++;
    }
    
    return ret;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    
    cost.resize(N);
    adj.resize(N, vector<int>(N));
    discovered.assign(N, -1);
    sccId.assign(N, -1);
    finished.assign(N, false);
    
    for (int i = 0; i < N; ++i) 
    {
        cin >> cost[i];
    }
    
    for (int i = 0; i < N; ++i) 
    {
        string line;
        cin >> line;
        
        for (int j = 0; j < N; ++j) 
        {
            adj[i][j] = line[j] - '0';
        }
    }
    
    vertexCounter = sccCounter = 0;
    
    for (int i = 0; i < N; ++i) 
    {
        if (discovered[i] == -1) 
        {
            dfs(i);
        }
    }

    int result = 0;
    
    for (int cost : sccMinCost) 
    {
        result += cost;
    }
    
    cout << result << "\n";
    
}