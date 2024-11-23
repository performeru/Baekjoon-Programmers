#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;

    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int minAdd = 5; 

    for (int start = 0; start < n; start++) 
    {
        int end = start;

        while (end < n && arr[end] - arr[start] < 5) 
        {
            end++;
        }

        int currentLength = end - start; 
        minAdd = min(minAdd, 5 - currentLength); 
    }

    cout << minAdd << '\n';

}
