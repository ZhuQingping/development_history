#include <iostream>
#include "use_const.hpp"

int myPrint2()
{
	double my_cube = AspectRatio * AspectRatio * AspectRatio;
	std::cout << "This is my_print_1(), " << "AspectRatio = " << AspectRatio << std::endl;
	std::cout << "This is my_print_1(), " << "AspectRatio^3 = " << my_cube << std::endl;
	std::cout << "Author of More Effective C++ is: " << authorName << std::endl;
	return 0;
}
