
#include "Brain.hpp"
#include <sstream>
#include <iostream>

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
	{
		std::stringstream ss;
		ss << "default idea " << i;
		this->ideas[i] = ss.str();
	}
	std::cout << "Brain default constructor called\n";
}

Brain::Brain(const Brain& other)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	std::cout << "Brain copy constructor called\n";
}

Brain& Brain::operator=(const Brain& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	std::cout << "Brain copy assignment operator called\n";
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called\n";
}