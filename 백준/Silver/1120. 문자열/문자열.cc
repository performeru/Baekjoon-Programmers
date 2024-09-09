#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string A, B;
    cin >> A >> B;

    int min_diff = B.length();  

    for (int i = 0; i <= B.length() - A.length(); i++) 
    {
        int current_diff = 0;

        for (int j = 0; j < A.length(); j++) 
        {
            if (A[j] != B[i + j]) 
            {
                current_diff++;
            }
        }
        min_diff = min(min_diff, current_diff);  
    }

    cout << min_diff << "\n";

}