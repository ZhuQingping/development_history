#include <iostream>

void test_const(const int data[], int num);


int main()
{
	int data[] = {1, 2, 4, 8, 16, 32, 64, 128};
	std::cout << "data[5] = " << data[5] << std::endl;
	test_const(data, 5);
	std::cout << "data[5] = " << data[5] << std::endl;
	return 0;
}

void test_const(const int data[], int num)
{
	int *tmp = data;
	tmp[num] = data[num] * 3;
}
