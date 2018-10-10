#include "C.hpp"

C::C(void)
{
	return ;
}

C::~C(void)
{
	return ;
}

C::C(const C &src)
{
	*this = src;
}

C & C::operator=(const C & rhs)
{
	(void)rhs;
	return (*this);
}
