#include <iostream>
#include <string>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string S;
    cin >> S;

    int count0 = 0; 
    int count1 = 0; 

    if (S[0] == '0') 
    {
        count0++;
    }
    else 
    {
        count1++;
    }
    
    for (size_t i = 1; i < S.size(); i++) 
    {
        if (S[i] != S[i - 1]) 
        { 
            if (S[i] == '0') 
            {
                count0++;
            }
            else 
            {
                count1++;
            }
        }
    }

    cout << min(count0, count1) << '\n';

}
