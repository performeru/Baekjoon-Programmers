#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string convertBase(int num, int base) 
{
    string result = "";

    while (num > 0) 
    {
        int remainder = num % base; 
        char remainderChar;

        if (remainder >= 10) 
        {
            remainderChar = 'A' + remainder - 10;
        }
        else
        {
            remainderChar = '0' + remainder;
        }

        result += remainderChar; 
        num /= base; 
    }

    reverse(result.begin(), result.end());
    
    return result;
}

int main() 
{
    int N, B;
    cin >> N >> B;

    string result = convertBase(N, B);

    cout << result << endl;
}