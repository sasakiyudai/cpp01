#include "Replace.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
	try
	{
		Replace::sed(argc, argv);
	}
	catch (const char *str)
	{
		std::cout << str << std::endl;
	}
}
