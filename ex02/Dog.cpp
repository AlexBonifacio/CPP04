
#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog")
{
	brain = new Brain();
	std::cout << "Dog default constructor called\n";
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	brain = new Brain(*copy.brain);
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
		// brain = other.brain; // shallow copy for testing purposes
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

std::string	Dog::getIdea(int i) const
{
	if (i < 0 || i >= 100)
	{
		std::cout << "Index out of bounds\n";
		return "";
	}
	return brain->ideas[i];
}

void	Dog::setIdea(int i, const std::string& idea)
{
	if (i < 0 || i >= 100)
	{
		std::cout << "Index out of bounds\n";
		return;
	}
	brain->ideas[i] = idea;
}