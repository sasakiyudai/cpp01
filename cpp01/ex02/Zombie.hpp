#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string type, std::string name);
		~Zombie();
		void set_type_name(std::string type, std::string name);
		void announce();
	private:
		std::string name;
		std::string type;
};

#endif
