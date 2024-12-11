#include "part1.h"
#include <iostream>

char* string_copy(char* dest, unsigned int destsize, char* src)
{
	char* ret = dest;
	while (*dest = *src) {
		dest++;
		src++;
	}
	return ret;
}

void part1()
{
	char password[] = "secret";
	char src[] = "hello world!";
	char dest[13];

	string_copy(dest, 12, src);

	std::cout << src << std::endl;
	std::cout << dest << std::endl;
}
