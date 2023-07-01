#include <iostream>

int main()
{
	int num[9];

	int Max{}, Max_of_Number{};

	for(int i=0; i<9; i++)
	{
		std::cin >> num[i];
		if(Max<num[i])
		{
			Max = num[i];
			Max_of_Number=i;
		}
	}

	std::cout << Max << " " << Max_of_Number+1;

}
