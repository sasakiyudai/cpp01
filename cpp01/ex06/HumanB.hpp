#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "HumanB.hpp"
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string const name);
		~HumanB();

		void attack();
		void setWeapon(Weapon &weapon);
	private:
		std::string name;
		const Weapon *weapon;
};

#endif
