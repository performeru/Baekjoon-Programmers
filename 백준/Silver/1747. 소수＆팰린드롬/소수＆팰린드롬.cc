#include <iostream>
#include <cmath>
#include <string>

using namespace std;

bool isPalindrome(int target) 
{
    string str = to_string(target);
    int s = 0;
    int e = str.size() - 1;

    while (s < e) 
    {
        if (str[s] != str[e]) 
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long n;
    cin >> n;
    
    long a[10000001];
    
    for (int i = 2; i < 10000001; i++) 
    {
        a[i] = i;
    }
    for (int i = 2; i < sqrt(10000001); i++) 
    {
        if (a[i] == 0) 
        {
            continue;
        }
        for (int j = i + i; j < 10000001; j = j + i) 
        {
            a[j] = 0;
        }
    }
    
    int i = n;
    
    while (true) 
    {
        if (a[i] != 0) 
        {
            int result = a[i];
            
            if (isPalindrome(result)) 
            {
                cout << result << '\n';
                break;
            }
        }
        i++;
    }

}
