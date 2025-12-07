#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called\n";
	brain = new Brain();
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	brain = new Brain(*copy.brain);
	std::cout << "Cat copy constructor called\n";
}

Cat&	Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		if (brain)
			delete brain;
		brain = new Brain(*other.brain);
	}

	std::cout << "Cat assignment operator called\n";
	return *this;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor called\n";
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow!\n";
}

std::string	Cat::getIdea(int i) const
{
	if (i < 0 || i >= 100)
	{
		std::cout << "Index out of bounds\n";
		return "";
	}
	return brain->ideas[i];
}
void	Cat::setIdea(int i, const std::string& idea)
{
	if (i < 0 || i >= 100)
	{
		std::cout << "Index out of bounds\n";
		return;
	}
	brain->ideas[i] = idea;
}