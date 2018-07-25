#include <iostream>

void cheers(int n);
double cube(double x);

int main()
{
	cheers(5);
	std::cout << "Give me a number: ";
	double side;
	std::cin >> side;
	double volume = cube(side);
	std::cout << "A " << side << "-foot cube has a volumn of ";
	std::cout << volume << " cubic foot.\n";
	cheers(cube(2));
	return 0;
}

void cheers(int n)
{
	for(int i = 0; i < n; i++)
	{
		std::cout << "Cheers! ";
	}
	std::cout << std::endl;
}

double cube(double x)
{
	return x * x * x;
}
