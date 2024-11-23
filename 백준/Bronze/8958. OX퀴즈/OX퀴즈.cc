#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test;  
    cin >> test;

    vector<string> a(test);
    for (int i = 0; i < test; i++) 
    {
        cin >> a[i];
    }

    for (int i = 0; i < test; i++) 
    {
        int sum = 0;  
        int currentStreak = 0;  

        for (char ch : a[i]) 
        {  
            if (ch == 'O') 
            {
                currentStreak++;  
                sum += currentStreak; 
            } 
            else 
            {
                currentStreak = 0;  
            }
        }

        cout << sum << '\n'; 
    }

}
