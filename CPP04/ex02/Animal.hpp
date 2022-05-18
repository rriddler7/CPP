#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
public:
	Animal();
	Animal(const Animal&);
	Animal & operator = (const Animal &);
	virtual ~Animal();
	virtual void	makeSound() const = 0;
	std::string	getType() const;
protected:
	std::string		_type;
};

#endif
