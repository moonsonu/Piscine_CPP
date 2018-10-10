#ifndef A_H
# define A_H

# include "Base.hpp"

class A : public Base
{
	public:
		A(void);
		A(const A &src);
		virtual ~A(void);
		A & operator= (A const &rhs);
};

#endif
