
#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Default idea " + std::to_string(i);
}

Brain::Brain(const Brain& other)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
}