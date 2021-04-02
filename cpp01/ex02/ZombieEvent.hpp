#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP

#include "Zombie.hpp"
#include <string>

class ZombieEvent
{
	public:
		ZombieEvent();
		~ZombieEvent();

		void setZombieType(std::string type);
		static std::string random_name(int len);
		Zombie* newZombie(std::string name);
		Zombie* randomChump();
	private:
		std::string type;
};

#endif
