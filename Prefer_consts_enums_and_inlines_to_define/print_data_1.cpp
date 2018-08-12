#include <iostream>
#include "use_const.hpp"

int myPrint1()
{
	double my_square = AspectRatio * AspectRatio;
	std::cout << "This is my_print_1(), " << "AspectRatio = " << AspectRatio << std::endl;
	std::cout << "This is my_print_1(), " << "AspectRatio^2 = " << my_square << std::endl;
	std::cout << "Author of Effective C++ is: " << authorName << std::endl;
	return 0;
}
