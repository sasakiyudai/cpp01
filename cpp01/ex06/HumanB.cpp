#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB(std::string const name):name(name)
{

}

HumanB::~HumanB()
{

}

void HumanB::attack()
{
	std::cout << this->name << "attacks with his " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
