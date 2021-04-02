#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human
{
	public:
		Human();
		~Human();
		const Brain &getBrain() const;
		std::string identify() const;
	private:
		const Brain brain;
};

#endif
