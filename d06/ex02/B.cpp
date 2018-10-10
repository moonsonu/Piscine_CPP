#include "B.hpp"

B::B(void)
{
	return ;
}

B::~B(void)
{
	return ;
}

B::B(const B &src)
{
	*this = src;
}

B & B::operator=(const B & rhs)
{
	(void)rhs;
	return (*this);
}
