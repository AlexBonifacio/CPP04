
#include "Animal.hpp"
#include <iostream>
#include <string>

Animal::Animal() : type("Default type")
{
	std::cout << "Animal default constructor called\n";
}

Animal::Animal(const std::string type) : type(type)
{
	std::cout << "Animal param constructor called\n";
}
Animal::Animal(const Animal& copy) 
	: type(copy.type)
{
	std::cout << "Animal copy constructor called\n";
}

Animal&	Animal::operator=(const Animal& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}

	std::cout << "Animal assignment operator called\n";
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called\n";
}

void	Animal::makeSound() const
{
	std::cout << "What kind of sound does an animal make?\n";
}

std::string	Animal::getType() const
{
	return type;
}