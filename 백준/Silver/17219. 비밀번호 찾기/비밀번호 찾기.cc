#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    cin >> N >> M;

    unordered_map<string, string> passwordMap;

    for (int i = 0; i < N; i++) 
    {
        string site, password;
        cin >> site >> password;
        passwordMap[site] = password;
    }

    for (int i = 0; i < M; i++) 
    {
        string query;
        cin >> query;
        cout << passwordMap[query] << '\n';
    }

}
