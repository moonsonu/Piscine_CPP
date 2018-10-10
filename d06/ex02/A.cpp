#include "A.hpp"

A::A(void)
{
	return ;
}

A::~A(void)
{
	return ;
}

A::A(const A &src)
{
	*this = src;
}

A & A::operator=(const A & rhs)
{
	(void)rhs;
	return (*this);
}
