#include <iostream>

const int ArSize = 8;
int sum_arr(int[], int);

int main()
{
	int cookies[ArSize] = {1,2,4,8,16,32,64,128};
	int sum = sum_arr(cookies, ArSize);
	std::cout << "Total cookies eaten: " << sum << std::endl;
	return 0;
}

int sum_arr(int data[], int num)
{
	int total = 0;
	for (int i = 0; i < num; i++)
	{
		total += data[i];
	}
	return total;
}
