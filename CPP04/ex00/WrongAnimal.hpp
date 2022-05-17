#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal&);
	WrongAnimal & operator = (const WrongAnimal &);
	virtual ~WrongAnimal();
	void	makeSound() const;
	std::string		getType() const;
protected:
	std::string		_type;
};

#endif
