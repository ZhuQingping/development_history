#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

class Customer
{
public:
	Customer(std::string);
	Customer(const Customer& rhs)	;
	Customer& operator=(const Customer& rhs);
private:
	std::string m_name;
};

#endif //CUSTOMER_HPP
