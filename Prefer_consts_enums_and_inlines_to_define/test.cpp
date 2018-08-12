#include "print_data_1.hpp"
#include "print_data_2.hpp"
#include <iostream>

int main()
{
	std::cout << "This is a test for: prefer consts, enums, and inlines to #defines" << std::endl;
	myPrint1();
	myPrint2();
	return 0;
}
