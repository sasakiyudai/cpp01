#include "Pony.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

Pony::Pony(): name_("default")
{
	std::cout << "I'm a pony, not a horse. ";
	std::cout << "My name is " << name_ << "." << std::endl;
}

Pony::Pony(std::string name): name_(name)
{
	std::cout << "I'm a pony, not a horse. ";
	std::cout << "My name is " << name_ << "." << std::endl;
}

void Pony::do_some_stuff()
{
	std::srand(std::time(nullptr));
	int random_val = std::rand();

	random_val %= 3;
	if (random_val == 0)
		std::cout << "I'm eating. I love MarugameSeimen." << std::endl;
	else if (random_val == 1)
		std::cout << "I'm sleeping. Get The Fuck Out!" << std::endl;
	else
		std::cout << "I'm runnnig. I will win in the next ARIMA-KINEN." << std::endl;
}

Pony::~Pony()
{
	std::cout << "Bye... Don't forget me..." << std::endl;
}
