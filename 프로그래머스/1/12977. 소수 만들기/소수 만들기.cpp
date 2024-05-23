#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(int num) 
{
    if (num < 2) return false;
    
    for (int i = 2; i <= sqrt(num); ++i) 
    {
        if (num % i == 0) return false;
    }
    return true;
}

int solution(vector<int> nums) 
{
    int count = 0;
    int n = nums.size();
    
    for (int i = 0; i < n - 2; ++i) 
    {
        for (int j = 0; j < n - 1; ++j) 
        {
            for (int k = 0; k < n; ++k) 
            {
                if (i < j && j < k) 
                {
                    int sum = nums[i] + nums[j] + nums[k];
                    if (isPrime(sum)) 
                    {
                        ++count;
                    }
                }
            }
        }
    }
    
    return count;
}