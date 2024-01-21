#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() 
{
    string N;
    int B;

    cin >> N >> B;

    int result = 0;
    int len = N.length();

    for (int i = 0; i < len; i++) 
    {
        char digit = N[i];

        if (isdigit(digit)) 
        {
            result = result * B + (digit - '0');
        }
        else
        {
            result = result * B + (digit - 'A' + 10);
        }
    }

    cout << result << endl;
}