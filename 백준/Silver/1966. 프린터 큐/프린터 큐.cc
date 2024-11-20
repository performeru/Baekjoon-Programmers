#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T;
    cin >> T;

    while (T--) 
    {
        int N, M;
        cin >> N >> M;

        queue<pair<int, int>> q; 
        priority_queue<int> pq; 

        for (int i = 0; i < N; i++) 
        {
            int importance;
            cin >> importance;
            q.push({importance, i}); 
            pq.push(importance);     
        }

        int printOrder = 0; 

        while (!q.empty()) 
        {
            int currImportance = q.front().first;
            int currIndex = q.front().second;
            q.pop();

            if (currImportance == pq.top()) 
            {
                pq.pop(); 
                printOrder++;

                if (currIndex == M) 
                {
                    cout << printOrder << '\n';
                    break;
                }
            } 
            else 
            {
                q.push({currImportance, currIndex});
            }
        }
    }

}
