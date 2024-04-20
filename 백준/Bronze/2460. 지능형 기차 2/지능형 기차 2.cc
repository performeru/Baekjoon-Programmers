#include <iostream>

using namespace std;

int main() 
{
    int max_people = 0; 
    int current_people = 0; 

    for (int i = 0; i < 10; ++i) 
    {
        int out, in;
        cin >> out >> in;

        current_people += in - out;

        if (current_people > max_people) 
        {
            max_people = current_people;
        }
    }

    cout << max_people << endl; 

}