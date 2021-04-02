#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "HumanA.hpp"
#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string const name, Weapon &weapon);
		~HumanA();

		void attack();
	private:
		std::string name;
		const Weapon &weapon;
};

#endif
