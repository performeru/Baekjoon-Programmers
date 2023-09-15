#include <iostream>

int main()
{
    
    int number;
	std::cin >> number;

	if(number>=90 && number<=100)
	{
		std::cout << "A" << std::endl;
	}
	else if (number >= 80 && number <= 89)
	{
		std::cout << "B" << std::endl;
	}
	else if (number >= 70 && number <= 79)
	{
		std::cout << "C" << std::endl;
	}
	else if (number >= 60 && number <= 69)
	{
		std::cout << "D" << std::endl;
	}
	else
	{
		std::cout << "F" << std::endl;
	}
	
    
}