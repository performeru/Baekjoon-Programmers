#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    cin >> N >> M;
    
    vector<int> Books(N);
    
    for(int i = 0; i < N; i++)
    {
        cin >> Books[i];
    }
    
    int BoxCount = 0;
    int CurrentBoxWeight = 0;
    
    for(int i = 0; i < N; i++) 
    {
        if (CurrentBoxWeight + Books[i] > M) 
        {  
            BoxCount++;
            CurrentBoxWeight = 0;  
        }
        CurrentBoxWeight += Books[i];  
    }
    
    if (CurrentBoxWeight > 0) 
    {  
        BoxCount++;
    }
    
    cout << BoxCount << "\n";
}