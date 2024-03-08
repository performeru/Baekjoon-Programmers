#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, k;
    cin >> N >> k;

    vector<int> scores(N);
    
    for (int i = 0; i < N; ++i) 
    {
        cin >> scores[i];
    }

    sort(scores.begin(), scores.end(), greater<int>());

    int cutoff = scores[k - 1];

    cout << cutoff << "\n";

}