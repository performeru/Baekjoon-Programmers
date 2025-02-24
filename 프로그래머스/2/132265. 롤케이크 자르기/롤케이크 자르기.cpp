#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<int> topping) 
{
    int n = topping.size();
    vector<int> left_unique(n, 0), right_unique(n, 0);
    unordered_set<int> left_set, right_set;

    for (int i = 0; i < n; i++) 
    {
        left_set.insert(topping[i]);
        left_unique[i] = left_set.size();
    }

    for (int i = n - 1; i >= 0; i--) 
    {
        right_set.insert(topping[i]);
        right_unique[i] = right_set.size();
    }

    int count = 0;
    for (int i = 0; i < n - 1; i++) 
    {
        if (left_unique[i] == right_unique[i + 1]) 
        {
            count++;
        }
    }

    return count;
}