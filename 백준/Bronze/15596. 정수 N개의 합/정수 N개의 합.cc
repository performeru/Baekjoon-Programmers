#include <vector>

long long sum(std::vector<int> &a) 
{
    long long total = 0;
    
    for (int num : a) 
    {
        total += num;
    }
    return total;
}

