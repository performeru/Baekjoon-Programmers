#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<int> nums(5);
    
    for (int i = 0; i < 5; i++) 
    {
        cin >> nums[i];
    }
    
    int i = 1;
    
    while (true) 
    {  
        int count = 0;
        
        for (int j = 0; j < 5; j++) 
        {
            if (i % nums[j] == 0) 
            {
                count++;
            }
        }
        
        if (count >= 3) 
        {
            cout << i << "\n";
            break;
        }
        
        i++;
    }
    
}