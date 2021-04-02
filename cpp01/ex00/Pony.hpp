#ifndef PONY_HPP
#define PONY_HPP

#include <string>

class Pony
{
	public:
		Pony();
		Pony(std::string name);
		~Pony();

		void do_some_stuff();
	private:
		std::string name_;
};

#endif
