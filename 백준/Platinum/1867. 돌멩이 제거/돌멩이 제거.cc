#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

const int MAX = 500 + 1;
int n, k;
vector<int> graph[MAX];
int matched[MAX];
bool visited[MAX];

bool dfs(int row) 
{
    for (int col : graph[row]) 
    {
        if (visited[col]) continue;
        visited[col] = true;

        if (matched[col] == -1 || dfs(matched[col])) 
        {
            matched[col] = row;
            return true;
        }
    }
    return false;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n >> k;

    for (int i = 0; i < k; i++) 
    {
        int r, c;
        cin >> r >> c;
        graph[r].push_back(c); 
    }

    memset(matched, -1, sizeof(matched));

    int matches = 0;
    for (int row = 1; row <= n; row++) 
    {
        memset(visited, false, sizeof(visited));
        if (dfs(row)) 
        {
            matches++;
        }
    }

    cout << matches << '\n'; 

}
