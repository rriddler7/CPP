#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default constructor Dog called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain;
}

Dog::Dog(const Dog & prototype)
{
	std::cout << "Copy constructor Dog called" << std::endl;
	*this = prototype;
}

Dog &Dog::operator = (const Dog &prototype)
{
	std::cout << "Copy assignment operator Dog called" << std::endl;
	if (this != &prototype)
	{
		this->_type = prototype._type;
		if (this->_brain)
		{
			delete this->_brain;
		}
		this->_brain = new Brain;
		*this->_brain = *prototype._brain;
	}
	return *this;
}

Dog::~Dog(void)
{
	std::cout << "Destructor Dog called" << std::endl;
	delete _brain;
	_brain = 0;
}

void	Dog::makeSound() const
{
	std::cout << this->_type << " barks" << std::endl;
}

void	Dog::setIdeas(size_t i, std::string ideas) const
{
	this->_brain->setIdeas(i, ideas);
}

void	Dog::expressIdeas(size_t i) const
{
	this->_brain->expressIdeas(i);
}
