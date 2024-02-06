#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    int result = a * b * c;
    
    vector<int>count (10,0);
    
    while(result > 0)
    {
        int digit = result % 10;
        count[digit]++;
        result /= 10;
    }
    
    for (int i = 0; i < 10; ++i) 
    {
        cout << count[i] << endl;
    }
    
}