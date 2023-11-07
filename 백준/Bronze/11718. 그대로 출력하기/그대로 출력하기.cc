#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string st;
    
    while (getline(cin, st)) 
    {
        cout << st << endl;
        
        if (st == "exit")
        {
            break;
        }
    }

}