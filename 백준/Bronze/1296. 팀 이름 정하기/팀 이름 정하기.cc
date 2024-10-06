#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int calculateWinProbability(const string &yeondu, const string &team) 
{
    int L = 0, O = 0, V = 0, E = 0;

    for (char ch : yeondu) 
    {
        if (ch == 'L') L++;
        else if (ch == 'O') O++;
        else if (ch == 'V') V++;
        else if (ch == 'E') E++;
    }

    for (char ch : team) 
    {
        if (ch == 'L') L++;
        else if (ch == 'O') O++;
        else if (ch == 'V') V++;
        else if (ch == 'E') E++;
    }

    int probability = ((L + O) * (L + V) * (L + E) * (O + V) * (O + E) * (V + E)) % 100;
    return probability;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string yeondu;
    int N;
    cin >> yeondu;
    cin >> N;

    vector<string> teams(N);
    
    for (int i = 0; i < N; ++i) 
    {
        cin >> teams[i];
    }

    string bestTeam;
    int bestProbability = -1;

    for (const string &team : teams) 
    {
        int probability = calculateWinProbability(yeondu, team);

        if (probability > bestProbability || (probability == bestProbability && team < bestTeam)) 
        {
            bestProbability = probability;
            bestTeam = team;
        }
    }

    cout << bestTeam << "\n";

}