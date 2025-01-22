#include "easyfind.h"
#include <iostream>
#include <vector>

int	main()
{
	int	num = 2;
	int	size = 4;
	int	search = 15;

	std::vector<int> box(size);
	for (int n = 0; n < size; n++)
	{
		num *= num;
		box[n] = num;
		std::cout << box[n] << ", ";
	}
	std::cout << std::endl;
	try
	{
		std::cout << *easyfind(box, search) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
