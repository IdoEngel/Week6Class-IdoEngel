#include <iostream>

struct Password
{
	char value[16];
	bool incorrect;
	Password() : value(""), incorrect(false)
	{
	}
};

int main()
{
	std::cout << "Enter your password to continue:" << std::endl;
	Password pwd;
	std::cin >> pwd.value;

	if (!strcmp(pwd.value, "********"))
		pwd.incorrect = true;

	if(pwd.incorrect)
		std::cout << "Congratulations\n";

	return 0;
}
