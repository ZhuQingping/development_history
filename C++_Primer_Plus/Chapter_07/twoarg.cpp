#include <iostream>

void n_chars(char, int);

int main()
{
	int times;
	char ch;

	std::cout << "Enter a character: ";
	std::cin >> ch;
	while (ch != 'q')
	{
		std::cout << "Enter an integer: ";
		std::cin >> times;
		n_chars(ch, times);
		std::cout << "Enter another character or press the q-key to quit: ";
		std::cin >> ch;
	}
	return 0;
}

void n_chars(char c, int n)
{
	while (n-- > 0)
	{
		std::cout << c;
	}
	std::cout << std::endl;
}
