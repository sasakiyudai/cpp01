#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	
}

Zombie::Zombie(std::string type, std::string name):name(name),type(type)
{
	
}

Zombie::~Zombie()
{
	std::cout << "<" << this->name << " (" << this->type << ")> ";
	std::cout << "Bye..." << std::endl;
}

void Zombie::announce()
{
	std::cout << "<" << this->name << " (" << this->type << ")> ";
	std::cout << "Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::set_type_name(std::string type, std::string name)
{
	this->type = type;
	this->name = name;
}
