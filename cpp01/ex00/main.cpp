#include "Pony.hpp"
#include <iostream>

void ponyOnTheHeap()
{
	Pony *heap_pony;

	heap_pony = new Pony("hikakin");
	heap_pony->do_some_stuff();
	delete heap_pony;
}

void ponyOnTheStack()
{
	Pony stack_pony("seikin");

	stack_pony.do_some_stuff();
}

int main()
{
	ponyOnTheHeap();
	std::cout << "--------------------" << std::endl;
	ponyOnTheStack();
	return (0);
}
