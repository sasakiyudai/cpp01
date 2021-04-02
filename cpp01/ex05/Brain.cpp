#include "Brain.hpp"
#include <string>
#include <sstream>
#include <iomanip>

Brain::Brain():weight(1300)
{

}

Brain::~Brain()
{

}

void Brain::study()
{
	this->weight += 1;
}

std::string Brain::identify() const
{
	const uintptr_t adr = (uintptr_t)this;
	std::stringstream ss;

	ss << "0x" << std::hex << std::uppercase << adr;
	return (ss.str());
}
