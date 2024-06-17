#include <iostream>
#include <stack>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N; 
    cin >> N;
    
    stack<pair<int, int>> assignments; 
    int totalScore = 0;

    for (int i = 0; i < N; ++i) 
    {
        int cmd;
        cin >> cmd;

        if (cmd == 1) 
        {
            int A, T;
            cin >> A >> T;
            assignments.push({A, T});
        }

        if (!assignments.empty()) 
        {
            auto &currentAssignment = assignments.top();
            currentAssignment.second -= 1; 

            if (currentAssignment.second == 0) 
            {
                totalScore += currentAssignment.first;
                assignments.pop();
            }
        }
    }
    cout << totalScore << "\n";
}