#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(std::string const name, Weapon &weapon):name(name),weapon(weapon)
{

}

HumanA::~HumanA()
{

}

void HumanA::attack()
{
	std::cout << this->name << "attacks with his " << this->weapon.getType() << std::endl;
}
