#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;

    vector<int> tallerLeft(N); 
    vector<int> result(N, 0);  

    for (int i = 0; i < N; i++) 
    {
        cin >> tallerLeft[i];
    }

    for (int i = 0; i < N; i++)
    {
        int count = 0; 
        
        for (int j = 0; j < N; j++) 
        {
            if (result[j] == 0)
            { 
                if (count == tallerLeft[i]) 
                { 
                    result[j] = i + 1; 
                    break;
                }
                count++; 
            }
        }
    }

    for (int i = 0; i < N; i++) 
    {
        cout << result[i] << " ";
    }

}