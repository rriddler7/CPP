#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog&);
	Dog & operator = (const Dog &);
	virtual ~Dog();
	void	makeSound() const;
	void	expressIdeas(size_t i) const;
	void	setIdeas(size_t i, std::string ideas) const;
private:
	Brain *_brain;
};

#endif
