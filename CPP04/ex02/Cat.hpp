#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat&);
	Cat & operator = (const Cat &);
	virtual ~Cat();
	void	makeSound() const;
	void	expressIdeas(size_t i) const;
	void	setIdeas(size_t i, std::string ideas) const;
private:
	Brain *_brain;
};

#endif
