#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <ctime>

void call_stack_engineer()
{
	for (int i = 0; i < 5; i++)
	{
		Zombie stack_engineer("kotlin", ZombieEvent::random_name(5));
		stack_engineer.announce();
	}
	for (int i = 5; i < 10; i++)
	{
		Zombie stack_engineer("swift", ZombieEvent::random_name(5));
		stack_engineer.announce();
	}
	return ;
}

int main()
{
	ZombieEvent pythonista;
	ZombieEvent cplupluer;
	Zombie *heap_engineer[10];

	std::srand((unsigned)time(NULL));

	pythonista.setZombieType("pythonista");
	cplupluer.setZombieType("cplupluer");

	for (int i = 0; i < 5; i++)
		heap_engineer[i] = pythonista.randomChump();
	for (int i = 5; i < 10; i++)
		heap_engineer[i] = cplupluer.randomChump();
	
	call_stack_engineer();

	for (int i = 0; i < 10; i++)
		delete heap_engineer[i];
	
	return (0);
}