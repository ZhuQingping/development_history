#include <iostream>

const int ArSize = 8;
int sum_arr(int[], int);

int main()
{
	int cookies[ArSize] = {1,2,4,8,16,32,64,128};
	std::cout << cookies << " = array address, ";
	std::cout << sizeof cookies << " = sizeof cookies\n";
	int sum = sum_arr(cookies, ArSize);
	std::cout << "Total cookies eaten: " << sum << std::endl;
	sum = sum_arr(cookies, 3);
	std::cout << "First three eaters ate " << sum << " cookies" << std::endl;
	sum = sum_arr(cookies + 4, 4);
	std::cout << "Last four eaters ate " << sum << " cookies" << std::endl;
	return 0;
}

int sum_arr(int data[], int num)
{
	int total = 0;
	std::cout << data << " = data, ";
	std::cout << sizeof data << " = sizeof data\n";
	for (int i = 0; i < num; i++)
	{
		total += data[i];
	}
	return total;
}
