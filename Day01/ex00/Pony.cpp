#include <iostream>
#include <string>
#include "Pony.hpp"

// void	ponyOnTheHeap()
// {
// 	Pony P = Pony("A pony is just a midget horse");
// }

void	ponyOnTheStack()
{
	Pony *P = new Pony("A pony is just a midget horse");
	delete P;
}