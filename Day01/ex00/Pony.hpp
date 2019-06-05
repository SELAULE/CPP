#ifndef PONY_H
# define PONY_H

#include <iostream>

class Pony
{
private:
	std::string pony;
public:
	Pony(std::string value) {
		std::cout << "The constructor is called and the value is" this->value << std::endl;
	}
	~Pony() {
		std::cout << "The destructor is called" << std::endl;
	} ;
	
};

// void	ponyOnTheHeap();
void	ponyOnTheStack();
#endif