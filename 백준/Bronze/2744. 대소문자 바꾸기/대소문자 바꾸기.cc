#include <iostream>
#include <cctype> 

using namespace std;

int main() 
{
    string word;
    cin >> word;

    for (char &c : word) 
    {
        if (islower(c))
        {
            c = toupper(c); 
        } 
        else
        {
            c = tolower(c); 
        }
    }

    cout << word << endl;

}