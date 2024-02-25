#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<int> nums)
{
    unordered_set<int> unique_species;
    
    for(int i = 0; i < nums.size(); i++)
    {
        unique_species.insert(nums[i]);
    }
    
    return min(unique_species.size(), nums.size() / 2);
}