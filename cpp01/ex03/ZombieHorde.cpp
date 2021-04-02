#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int size, std::string type):size(size),type(type)
{
	zombie = new Zombie[size];
	for (int i = 0; i < size; i++)
		zombie[i].set_type_name(type, random_name(5));
}

ZombieHorde::~ZombieHorde()
{
	delete[] zombie;
}

std::string ZombieHorde::random_name(int len)
{
	const std::string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	std::string res;

	for (int i = 0; i < len; i++)
	{
		res += alpha[std::rand() % 52];
	}
	return (res);
}

void ZombieHorde::announce()
{
	for (int i = 0; i < this->size; i++)
		this->zombie[i].announce();
}
