#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>

int	main(void)
{
	const Animal* meta = new Animal();
	std::cout << "\n";
	const Animal* i = new Cat();
	std::cout << "\n";
	const Animal* j = new Dog();

	std::cout << "\n";
	std::cout << meta->getType() << '\n';
	meta->makeSound();
	delete meta;
	std::cout << "\n";
	
	std::cout << i->getType() << '\n';
	i->makeSound();
	delete i;
	std::cout << "\n";

	std::cout << j->getType() << '\n';
	j->makeSound();
	delete j;

	std::cout << "\n--- WrongAnimal tests ---\n\n";
	
	const WrongAnimal* wrongMeta = new WrongAnimal();
	std::cout << "\n";
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << "\n";
	std::cout << wrongMeta->getType() << '\n';
	wrongMeta->makeSound();
	delete wrongMeta;
	std::cout << "\n";
	std::cout << wrongCat->getType() << '\n';
	wrongCat->makeSound();
	delete wrongCat;

	{
		std::cout << "\n--- Leak check ---\n\n";
		system("leaks ex00");
	}

	return 0;
}