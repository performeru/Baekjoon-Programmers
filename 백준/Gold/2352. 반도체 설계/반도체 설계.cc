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
    vector<int> ports(n);
    
    for (int i = 0; i < n; i++) 
    {
        cin >> ports[i];
    }
    
    vector<int> lis; 
    
    for (int i = 0; i < n; i++) 
    {
        int pos = lower_bound(lis.begin(), lis.end(), ports[i]) - lis.begin();
        
        if (pos == lis.size()) 
        {
            lis.push_back(ports[i]);
        } 
        else 
        {
            lis[pos] = ports[i];
        }
    }
    
    cout << lis.size() << '\n';

}
