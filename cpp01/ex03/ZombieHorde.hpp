#ifndef ZOMBIE_HORDE_HPP
#define ZOMBIE_HORDE_HPP

#include "Zombie.hpp"
#include <string>

class ZombieHorde
{
	public:
		ZombieHorde(int size, std::string type);
		~ZombieHorde();
		void announce();
		static std::string random_name(int len);
	private:
		int size;
		std::string type;
		Zombie *zombie;
};

#endif
