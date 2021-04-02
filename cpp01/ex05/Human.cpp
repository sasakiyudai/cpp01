#include "Human.hpp"
#include <string>

Human::Human()
{

}

Human::~Human()
{

}

const Brain &Human::getBrain() const
{
	return (this->brain);
}

std::string Human::identify() const
{
	return (this->brain.identify());
}
