#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    
    vector<string> friends(N);
    for (int i = 0; i < N; i++) 
    {
        cin >> friends[i];
    }

    int max_friends = 0;

    for (int i = 0; i < N; i++) 
    {
        vector<bool> is_friend(N, false);
        int count = 0;

        for (int j = 0; j < N; j++) 
        {
            if (i != j && friends[i][j] == 'Y') 
            {
                if (!is_friend[j]) 
                {
                    is_friend[j] = true;
                    count++;
                }

                for (int k = 0; k < N; k++) 
                {
                    if (i != k && friends[j][k] == 'Y' && !is_friend[k]) 
                    {
                        is_friend[k] = true;
                        count++;
                    }
                }
            }
        }

        max_friends = max(max_friends, count);
    }

    cout << max_friends << "\n";

}