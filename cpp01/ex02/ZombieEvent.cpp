#include "ZombieEvent.hpp"
#include <cstdlib>
#include <string>

ZombieEvent::ZombieEvent()
{

}

ZombieEvent::~ZombieEvent()
{

}

void ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

std::string ZombieEvent::random_name(int len)
{
	const std::string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	std::string res;

	for (int i = 0; i < len; i++)
	{
		res += alpha[std::rand() % 52];
	}
	return (res);
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie* res;

	res = new Zombie(this->type, name);
	return (res);
}

Zombie* ZombieEvent::randomChump()
{
	Zombie* res;

	res = this->newZombie(this->random_name(5));
	res->announce();
	return (res);
}
