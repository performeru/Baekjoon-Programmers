#include <iostream>

int main()
{
	int X, Y;
	int Sum{};
	int a, b;

	std::cin >> X;
	std::cin >> Y;

	for (int i = 0; i < Y; i++)
	{
		std::cin >> a >> b;

		Sum = Sum + (a * b) ;
	}
	
	
	if(Sum==X)
	{
		std::cout << "Yes" << std::endl;
	}
	else
	{
		std::cout << "No" << std::endl;
	}

}