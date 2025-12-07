#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

#include <iostream>

int main()
{
	Animal* a = new Dog();
	Animal* b = new Cat();

	// Animal* c = new Animal(); // This line will cause a compilation error

	a->makeSound();
	b->makeSound();

	delete a;
	delete b;
}