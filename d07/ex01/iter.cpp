#include <iostream>
#include <string>

template<typename T>
void iter(T *arr, size_t len, void (*func)(T const &))
{
	if (!arr)
		return;

	for (size_t i = 0; i < len; i++)
	{
		func(arr[i]);
	}
}

void printInt(int const & i)
{
	std::cout << i << std::endl;
}

void printString(std::string const & str)
{
	std::cout << str << std::endl;
}

int main(void)
{
	int arrInt[] = {23, 345, 923};
	std::string arrString[] = {"teddy", "mari", "lime", "mung", "neow"};

	std::cout << "Array String: "<< std::endl;
	iter(arrString, 5, printString);
	std::cout << std::endl;

	std::cout << "Array Int: "<< std::endl;
	iter(arrInt, 3, printInt);
	std::cout << std::endl;

	return (0);
}
