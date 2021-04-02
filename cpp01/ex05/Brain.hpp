#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
	public:
		Brain();
		~Brain();
		void study();
		std::string identify() const;
	private:
		int weight;
};

#endif
