#include "easyfind.h"
#include <iostream>
#include <vector>

int	main()
{
	int	num = 2;
	int	size = 4;
	int	search = 15;

	std::vector<int> box;
	for (int n = 0; n < size; n++)
	{
		num *= num;
		box.push_back(num);
		std::cout << box[n] << ", ";
	}
	std::cout << std::endl;
	std::vector<int>::iterator it = easyfind(box, search);
	if (it == box.end())
		std::cout << "Not found" << std::endl;
	else
		std::cout << *it << std::endl;
}
