#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    cin >> N >> M;

    set<string> unheard;
    set<string> unseen;

    for (int i = 0; i < N; ++i) 
    {
        string name;
        cin >> name;
        unheard.insert(name);
    }

    for (int i = 0; i < M; ++i) 
    {
        string name;
        cin >> name;
        unseen.insert(name);
    }

    vector<string> unheard_unseen;
    
    for (const auto& name : unheard) 
    {
        if (unseen.find(name) != unseen.end()) 
        {
            unheard_unseen.push_back(name);
        }
    }

    sort(unheard_unseen.begin(), unheard_unseen.end());

    cout << unheard_unseen.size() << "\n";
    
    for (const auto& name : unheard_unseen) 
    {
        cout << name << "\n";
    }

}