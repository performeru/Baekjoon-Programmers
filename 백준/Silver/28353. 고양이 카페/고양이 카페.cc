#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, k;
    cin >> n >> k;
    
    vector<int> weight(n);
    
    for(int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    
    sort(weight.begin(), weight.end());
    
    int left = 0;
    int right = n - 1;
    int happy_people = 0;

    while (left < right) 
    {
        if (weight[left] + weight[right] <= k) 
        {
            happy_people++;
            left++;  
            right--; 
        } 
        else 
        {
            right--; 
        }
    }
    
    cout << happy_people << '\n';
}