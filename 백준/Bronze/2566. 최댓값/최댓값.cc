#include <iostream>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int arr[9][9];
    int max = 0;
    int a = 1, b = 1;

    for (int i = 0; i < 9; i++) 
    {
        for (int j = 0; j < 9; j++) 
        {
            cin >> arr[i][j];
            if (arr[i][j] > max) 
            {
                max = arr[i][j];
                a = i + 1; 
                b = j + 1; 
            }
        }
    }

    cout << max << "\n";
    cout << a << " " << b << "\n";

}
