#include <iostream>
#include "named_object.h"

int main()
{
	NamedObject<int> no1("Smallest Prime Number", 2);
	NamedObject<int> no2(no1);
	return 0;
}
