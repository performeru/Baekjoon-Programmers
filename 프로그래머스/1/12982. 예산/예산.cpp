#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) 
{
    sort(d.begin(), d.end());
    
    int count = 0;
    
    for(auto cost : d)
    {
        if(cost <= budget)
        {
            budget -= cost;
            count++;
        }
        else
        {
            break;
        }
    }
    return count;
}