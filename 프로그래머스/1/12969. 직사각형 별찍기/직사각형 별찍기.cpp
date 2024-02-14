#include <iostream>

using namespace std;

int main(void) 
{
    int a, b;
    cin >> a >> b;
    
    string line(a, '*');
    
    for(int i = 0; i < b; i++)
    {
        cout << line << endl;
    }
 
    return 0;
}