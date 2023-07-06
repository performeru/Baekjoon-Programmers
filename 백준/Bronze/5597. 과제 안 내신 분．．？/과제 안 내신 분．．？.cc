#include <iostream>

int main()
{
    bool submitted[30]{ false }; 

    for (int i = 0; i < 28; i++)
    {
        int number;
        std::cin >> number;
        submitted[number] = true; 
    }
    
    int firstMissing = -1; 
    int secondMissing = -1;

    for (int i = 1; i <= 30; i++)
    {
        if (!submitted[i])
        {
            if (firstMissing == -1)
            {
                firstMissing = i;
            }
            else
            {
                secondMissing = i;
                break;
            }
        }
    }

    std::cout << firstMissing << std::endl;
    std::cout << secondMissing << std::endl;;

    return 0;
}
