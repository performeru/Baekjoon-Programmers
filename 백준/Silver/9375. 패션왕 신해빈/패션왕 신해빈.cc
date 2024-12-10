#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) 
    {
        int n; 
        cin >> n;

        map<string, int> clothes; 

        for (int i = 0; i < n; i++) 
        {
            string name, type;
            cin >> name >> type;
            clothes[type]++;
        }

        int result = 1;
        
        for (auto& pair : clothes) 
        {
            result *= (pair.second + 1); 
        }

        cout << result - 1 << "\n"; 
    }
}