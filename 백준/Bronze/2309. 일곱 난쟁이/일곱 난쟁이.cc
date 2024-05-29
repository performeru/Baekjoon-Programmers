#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<int> heights(9);
    int total_sum = 0;
    
    for(int i = 0; i < 9; i++)
    {
        cin >> heights[i];
        total_sum += heights[i];
    }
    
    bool found = false;
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (total_sum - heights[i] - heights[j] == 100)
            {
                heights[i] = heights[j] = 0; 
                found = true;
                break;
            }
        }
        if (found)
        {
            break;
        }
    }
    
    vector<int> result;
    for (int i = 0; i < 9; i++)
    {
        if (heights[i] != 0)
        {
            result.push_back(heights[i]);
        }
    }
    sort(result.begin(), result.end());
    
    for (int i = 0; i < 7; i++)
    {
        cout << result[i] << '\n';
    }
  
}