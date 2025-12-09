#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>

#define N 6

/* Operator copy test*/
int main(void)
{
	if (N % 2 != 0)
	{
		std::cout << "N must be even\n";
		return 1;
	}

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
	std::cout << "\n\n";
	
	Dog *dog1 = dynamic_cast<Dog*>(animals[1]);
	Dog *dog2 = dynamic_cast<Dog*>(animals[2]);
	/* Here we test the deep copy, only working with idea 1 */
	/* First we check the original idea */
	std::cout << "Dog1" << dog1->getIdea(1) << '\n';

	/* Then we update dog1 idea */
	dog1->setIdea(1, "Chase the cat");

	/* Print dog1 updated idea */
	std::cout << "Dog1 Updated idea 1: " << dog1->getIdea(1) << '\n';

	/* Copy Dog1 into Dog2 */
	*dog2 = *dog1;

	/* Print dog2 idea to see if it was updated */
	/* dog2 idea must be the same as dog1 idea*/
	std::cout << "Dog2 Updated idea 1: " << dog2->getIdea(1) << '\n';

	/* We change the idea1 of dog1 */
	dog1->setIdea(1, "Deep sleep all day");
	std::cout << "Dog1 Updated idea 1: " << dog1->getIdea(1) << '\n';

	/* And we check that it hasn't changed the idea of dog2 */
	std::cout << "Dog2 Updated idea 1: " << dog2->getIdea(1) << '\n';

	std::cout << "\n\n\n";
	for (int i = 0; i < N; i++)
	{
		delete animals[i];
	}
}

/* Copy constructor test */
// int main(void)
// {
// 	if (N % 2 != 0)
// 	{
// 		std::cout << "N must be even\n";
// 		return 1;
// 	}

// 	Animal *animals[N];

// 	for (int i = 0; i < (N / 2); i++)
// 	{
// 		animals[i] = new Dog();
// 	}
// 	std::cout << '\n';
// 	for (int i = N - 1; i >= (N / 2); i--)
// 	{
// 		animals[i] = new Cat();
// 	}
// 	std::cout << "\n\n";
	
// 	Dog* dog1 = dynamic_cast<Dog*>(animals[1]);



// 	/* Here we test the deep copy, only working with idea 1 */
// 	/* First we check the original idea */
// 	std::cout << dog1->getIdea(1) << '\n';

// 	/* Then we update dog1 idea */
// 	dog1->setIdea(1, "Chase the cat");

// 	Dog snoopy(*dog1);
// 	/* Print dog1 updated idea */
// 	std::cout << "Updated idea 1: " << dog1->getIdea(1) << '\n';

// 	/* Copy Dog1 into Dog2 */

// 	/* Print dog2 idea to see if it was updated */
// 	/* dog2 idea must be the same as dog1 idea*/
// 	std::cout << "Snoopy idea: " << snoopy.getIdea(1) << '\n';
	
// 	/* We change the idea1 of dog1 */
// 	dog1->setIdea(1, "Deep sleep all day");
// 	std::cout << "Updated idea 1: " << dog1->getIdea(1) << '\n';

// 	/* And we check that it hasn't changed the idea of snoopy */
// 	std::cout << "Snoopy idea: " << snoopy.getIdea(1) << '\n';


// 	std::cout << "\n\n\n";
// 	for (int i = 0; i < N; i++)
// 	{
// 		delete animals[i];
// 	}
// }