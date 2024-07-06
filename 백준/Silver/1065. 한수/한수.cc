#include <iostream>

using namespace std;

bool isHansu(int num) 
{
    if (num < 100) 
    {
        return true; 
    }

    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int units = num % 10;

    return (hundreds - tens) == (tens - units);
}

int main() 
{
    int N;
    cin >> N;

    int hansu_count = 0;

    for (int i = 1; i <= N; ++i) 
    {
        if (isHansu(i)) 
        {
            hansu_count++;
        }
    }

    cout << hansu_count << "\n";

}