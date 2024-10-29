#include <iostream>
#include <vector>

using namespace std;

vector<int> parent;

int find(int x) 
{
    if (parent[x] == x) 
    {
        return x;
    }
    return parent[x] = find(parent[x]);
}

void unionSets(int a, int b) 
{
    a = find(a);
    b = find(b);
    
    if (a != b) 
    {
        parent[b] = a;

    }
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    cin >> N >> M;

    parent.resize(N + 1);
    
    for (int i = 1; i <= N; i++) 
    {
        parent[i] = i;
    }

    int truthCount;
    cin >> truthCount;
    vector<int> truthPeople(truthCount);
    
    for (int i = 0; i < truthCount; i++) 
    {
        cin >> truthPeople[i];
    }

    vector<vector<int>> parties(M);
    
    for (int i = 0; i < M; i++) 
    {
        int partySize;
        cin >> partySize;
        parties[i].resize(partySize);
        
        for (int j = 0; j < partySize; j++) 
        {
            cin >> parties[i][j];
        }
        for (int j = 1; j < partySize; j++) 
        {
            unionSets(parties[i][0], parties[i][j]);
        }
    }

    int truthRoot = truthCount > 0 ? find(truthPeople[0]) : -1;
    
    for (int person : truthPeople) 
    {
        unionSets(truthRoot, person);
    }

    int maxLies = 0;
    
    for (int i = 0; i < M; i++) 
    {
        bool canLie = true;
        for (int person : parties[i]) 
        {
            if (find(person) == truthRoot) 
            {
                canLie = false;
                break;
            }
        }
        if (canLie) 
        {
            maxLies++;
        }
    }

    cout << maxLies << '\n';

}