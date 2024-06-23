#include <iostream>
#include <deque>
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

    deque<int> dq;
    vector<int> positions(M);

    for (int i = 1; i <= N; ++i) 
    {
        dq.push_back(i);
    }

    for (int i = 0; i < M; ++i) 
    {
        cin >> positions[i];
    }

    int total_moves = 0;

    for (int i = 0; i < M; ++i) 
    {
        int target = positions[i];
        int idx = find(dq.begin(), dq.end(), target) - dq.begin();
        
        if (idx < dq.size() - idx) 
        {
            while (dq.front() != target) 
            {
                dq.push_back(dq.front());
                dq.pop_front();
                total_moves++;
            }
        } 
        else
        {
            while (dq.front() != target) 
            {
                dq.push_front(dq.back());
                dq.pop_back();
                total_moves++;
            }
        }

        dq.pop_front();
    }

    cout << total_moves << "\n";

}