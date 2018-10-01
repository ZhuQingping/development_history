#include <iostream>
#include "customer.hpp"

Customer::Customer(std::string name) : m_name(name)
{
	std::cout << "Customer:Customer(std::string), " << m_name << std::endl;
}

Customer::Customer(const Customer& rhs) : m_name(rhs.m_name)
{
	std::cout << "Customer::Customer(const Customer&), " << m_name << std::endl;
}

Customer& Customer::operator=(const Customer& rhs)
{
	m_name = rhs.m_name;
	std::cout << "m_name: " << m_name << std::endl;
	return *this;
}

int main()
{
	Customer c1("Majing");
	Customer c2("Qingping");
	Customer c3(c1);
	Customer c4 = c2;
	Customer c5("test");
	c5 = c4;
	std::cout << "c1 address: " << &c1 << std::endl;
	std::cout << "c2 address: " << &c2 << std::endl;
	std::cout << "c3 address: " << &c3 << std::endl;
	std::cout << "c4 address: " << &c4 << std::endl;
	std::cout << "c5 address: " << &c5 << std::endl;
	return 0;
}
