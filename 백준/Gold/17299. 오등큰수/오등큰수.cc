#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;

    vector<int> A(N); 
    unordered_map<int, int> frequency; 
    vector<int> result(N, -1);  

    for (int i = 0; i < N; i++) 
    {
        cin >> A[i];
        frequency[A[i]]++;
    }

    stack<int> s;  

    for (int i = N - 1; i >= 0; i--) 
    {
        int currentFreq = frequency[A[i]];

        while (!s.empty() && frequency[s.top()] <= currentFreq) 
        {
            s.pop();
        }

        if (!s.empty()) 
        {
            result[i] = s.top();
        }

        s.push(A[i]);
    }

    for (int i = 0; i < N; i++) 
    {
        cout << result[i] << " ";
    }
    cout << "\n";

}