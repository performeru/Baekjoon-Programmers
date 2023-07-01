#include <iostream>

int main()
{
    int count, num, Max{ -1000001 }, Min{ 1000001 };

    std::cin >> count;

    for (int i = 0; i < count; i++)
    {
        std::cin >> num;
        if (num >= Max)
        {
            Max = num;
        }
        if (num <= Min)
        {
            Min = num;
        }
    }

    std::cout << Min << ' ' << Max << '\n';

    return 0;
}