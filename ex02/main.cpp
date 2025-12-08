#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

#include <iostream>

int	main(void)
{
	// const Animal* meta = new Animal();
	std::cout << "\n";
	const Animal* i = new Cat();
	std::cout << "\n";
	const Animal* j = new Dog();

	std::cout << "\n";
	// std::cout << meta->getType() << '\n';
	// meta->makeSound();
	std::cout << "\n";
	
	std::cout << i->getType() << '\n';
	i->makeSound();
	delete i;
	std::cout << "\n";

	std::cout << j->getType() << '\n';
	j->makeSound();
	delete j;

	std::cout << "\n";


	return 0;
}