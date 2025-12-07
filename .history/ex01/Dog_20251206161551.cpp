
#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor called\n";
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	
	std::cout << "Dog copy constructor called\n";
}

Dog&	Dog::operator=(const Dog& other)
{
	if (this !=  &other)
	{
		Animal::operator=(other);
		if (brain)
			delete brain;
		brain = new Brain(*other.brain);
	}

	std::cout << "Dog assignment operator called\n";
	return *this;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor called\n";
}

void	Dog::makeSound() const
{
	std::cout << "Woof Woof!\n";
}