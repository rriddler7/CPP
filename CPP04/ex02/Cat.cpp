#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default constructor Cat called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain;
}

Cat::Cat(const Cat & prototype)
{
	std::cout << "Copy constructor Cat called" << std::endl;
	*this = prototype;
}

Cat &Cat::operator = (const Cat &prototype)
{
	std::cout << "Copy assignment operator Cat called" << std::endl;
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

Cat::~Cat(void)
{
	std::cout << "Destructor Cat called" << std::endl;
	delete _brain;
	_brain = 0;
}

void	Cat::makeSound() const
{
	std::cout << this->_type << " meows" << std::endl;
}

void	Cat::setIdeas(size_t i, std::string ideas) const
{
	this->_brain->setIdeas(i, ideas);
}

void	Cat::expressIdeas(size_t i) const
{
	this->_brain->expressIdeas(i);
}
