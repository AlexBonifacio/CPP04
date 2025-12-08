#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat& copy);
		~Cat();
		Cat& operator=(const Cat& other);

		void 		makeSound() const;
		std::string getIdea(int i) const;
		void 		setIdea(int i, const std::string& idea);

		
	private:
		Brain* brain;
};

#endif // CAT_HPP