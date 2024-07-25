#include <iostream>
#include <map>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    map<int, char> results
    {
        {1, 'A'}, 
        {2, 'B'}, 
        {3, 'C'}, 
        {4, 'D'}, 
        {0, 'E'} 
    };

    for (int i = 0; i < 3; i++) 
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        int count0 = (a == 0) + (b == 0) + (c == 0) + (d == 0);

        cout << results[count0] << "\n";
    }
    
}