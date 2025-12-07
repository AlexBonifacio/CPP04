#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog& copy);
		~Dog();
		Dog& operator=(const Dog& other);

		void makeSound() const;
		std::string getIdea(int i) const;
		void setIdea(int i, const std::string& idea);

	private:
		Brain* brain;
};

#endif // DOG_HPP