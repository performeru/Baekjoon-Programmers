#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> tree[50];
int dp[50];

int dfs(int node) 
{
    if (tree[node].empty()) 
    {
        return 0;
    }
    
    vector<int> times;
    
    for (int child : tree[node]) 
    {
        times.push_back(dfs(child));
    }
    
    sort(times.rbegin(), times.rend());
    
    int max_time = 0;
    for (int i = 0; i < times.size(); ++i) 
    {
        max_time = max(max_time, times[i] + i + 1);
    }
    
    return max_time;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    
    for (int i = 0; i < N; ++i) 
    {
        int supervisor;
        cin >> supervisor;
        
        if (supervisor != -1) 
        {
            tree[supervisor].push_back(i);
        }
    }
    
    cout << dfs(0) << "\n";
    
}