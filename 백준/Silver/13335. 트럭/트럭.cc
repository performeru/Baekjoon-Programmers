#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, w, L;
    cin >> n >> w >> L;

    vector<int> trucks(n);
    
    for (int i = 0; i < n; ++i) 
    {
        cin >> trucks[i];
    }

    queue<int> bridge;  
    int current_weight = 0; 
    int time = 0;         
    int index = 0;       

    while (index < n || !bridge.empty()) 
    {
        time++;

        if (!bridge.empty() && bridge.front() == time) 
        {
            current_weight -= trucks[index - bridge.size()];
            bridge.pop();
        }

        if (index < n && current_weight + trucks[index] <= L && bridge.size() < w) 
        {
            current_weight += trucks[index];
            bridge.push(time + w); 
            index++;
        }
    }

    cout << time << '\n';

}