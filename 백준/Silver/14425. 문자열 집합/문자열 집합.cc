#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
    int count = 0;
    
    unordered_set<string> s;
    string str;
    
    for(int i = 0; i < n; i++)
    {
        cin >> str;
        s.insert(str);
    }
    
    for(int i = 0; i < m; i++)
    {
        cin >> str;
        
        if(s.find(str) != s.end())
        {
            count++;
        }
    }
    
    cout << count << '\n';
}