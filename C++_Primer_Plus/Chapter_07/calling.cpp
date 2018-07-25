#include <iostream>

void simple();	// function prototype

int main()
{
	std::cout << "main() will call simple() function:\n";
	simple();
	std::cout << "main() is finished with the simple() function.\n";
	return 0;
}


// function definition
void simple()
{
	std::cout << "I'm but a simple function.\n";
}
