
#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

WrongAnimal::WrongAnimal() : type("Default type")
{
	std::cout << "WrongAnimal default constructor called\n";
}

WrongAnimal::WrongAnimal(const std::string type) : type(type)
{
	std::cout << "WrongAnimal param constructor called\n";
}
WrongAnimal::WrongAnimal(const WrongAnimal& copy) 
	: type(copy.type)
{
	std::cout << "WrongAnimal copy constructor called\n";
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}

	std::cout << "WrongAnimal assignment operator called\n";
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called\n";
}

void	WrongAnimal::makeSound() const
{
	std::cout << "What kind of sound does an WrongAnimal make?\n";
}

std::string	WrongAnimal::getType() const
{
	return type;
}