#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>

#define N 10

int main(void)
{
	Animal *animals[N];

	for (int i = 0; i < (N / 2); i++)
	{
		animals[i] = new Dog();
	}
	std::cout << '\n';
	for (int i = N - 1; i >= (N / 2); i--)
	{
		animals[i] = new Cat();
	}
	std::cout << '\n';
	std::cout << '\n';
	std::cout << '\n';
	
	animals[1]->makeSound();
	std::cout << dynamic_cast<Dog*>(animals[1])->getIdea(1) << '\n';
	std::cout << dynamic_cast<Dog*>(animals[1])->getIdea(2) << '\n';

	dynamic_cast<Dog*>(animals[1])->setIdea(1, "Chase the cat");
	std::string idea;

	idea = dynamic_cast<Dog*>(animals[1])->getIdea(1);
	std::cout << "Updated idea 1: " << idea << '\n';

	*animals[1] = *animals[2];

	idea = dynamic_cast<Dog*>(animals[2])->getIdea(1);
	std::cout << "Updated idea 2: " << idea << '\n';

	dynamic_cast<Dog*>(animals[1])->setIdea(1, "Sleep all day");
	idea = dynamic_cast<Dog*>(animals[1])->getIdea(1);
	std::cout << "Updated idea 1: " << idea << '\n';

	idea = dynamic_cast<Dog*>(animals[2])->getIdea(1);
	std::cout << "Updated idea 2: " << idea << '\n';

	dynamic_cast<Dog*>(animals[1])->setIdea(1, "test idea for deep copy");




	std::cout << '\n';
	std::cout << '\n';
	std::cout << '\n';
	for (int i = 0; i < N; i++)
	{
		std::cout << "Deleting animal at index " << i << ":\n";
		delete animals[i];
	}
}
// int	main(void)
// {
// 	const Animal* meta = new Animal();
// 	std::cout << "\n";
// 	const Animal* i = new Cat();
// 	std::cout << "\n";
// 	const Animal* j = new Dog();

// 	std::cout << "\n";
// 	std::cout << meta->getType() << '\n';
// 	meta->makeSound();
// 	delete meta;
// 	std::cout << "\n";
	
// 	std::cout << i->getType() << '\n';
// 	i->makeSound();
// 	delete i;
// 	std::cout << "\n";

// 	std::cout << j->getType() << '\n';
// 	j->makeSound();
// 	delete j;

// 	std::cout << "\n--- WrongAnimal tests ---\n\n";
	
// 	const WrongAnimal* wrongMeta = new WrongAnimal();
// 	std::cout << "\n";
// 	const WrongCat* wrongCat = new WrongCat();
// 	std::cout << "\n";
// 	std::cout << wrongMeta->getType() << '\n';
// 	wrongMeta->makeSound();
// 	delete wrongMeta;
// 	std::cout << "\n";
// 	std::cout << wrongCat->getType() << '\n';
// 	wrongCat->makeSound();
// 	delete wrongCat;
// 	std::cout << "\n\n";

// 	WrongCat testWrongCat;
// 	testWrongCat.makeSound();
// 	std::cout << "\n";

// 	return 0;
// }