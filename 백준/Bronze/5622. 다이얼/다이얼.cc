#include <iostream>
#include <string>

using namespace std;

int main()
{
    string num[] = { "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ" }; 
    string str;
    int sum{};

    cin >> str;

    for (int i = 0; i < str.length(); i++) 
    {
        for (int j = 0; j < 8; j++) 
        {
            if (num[j].find(str.at(i)) != string::npos) 
            {
                sum += (j + 3);
            }
        }
    }
    cout << sum;
}