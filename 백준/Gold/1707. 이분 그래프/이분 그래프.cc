#include <iostream>
#include <vector>

using namespace std;

void DFS(int node);
static vector<vector<int>> A;
static vector<int> check;
static vector<bool> visited;
static bool iseven;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    
    while (n--) 
    {
        int v, e;
        cin >> v >> e;

        A.clear();
        visited.clear();
        check.clear();
        A.resize(v + 1);
        visited.resize(v + 1, false);
        check.resize(v + 1, 0);
        iseven = true;

        for (int j = 0; j < e; j++)
        {
            int s, k;
            cin >> s >> k;
            A[s].push_back(k);
            A[k].push_back(s);
        }

        for (int i = 1; i <= v; i++)
        {
            if (!visited[i] && iseven)
            {
                DFS(i);
            }
        }

        if (iseven)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}

void DFS(int node)
{
    visited[node] = true;

    for (int i : A[node])
    {
        if (!visited[i])
        {
            check[i] = (check[node] + 1) % 2;
            DFS(i);
        }
        else if (check[node] == check[i])
        {
            iseven = false;
        }
    }
}
