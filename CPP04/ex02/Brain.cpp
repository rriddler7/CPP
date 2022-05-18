#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default constructor Brain called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		setIdeas(i, "I have no idea :(");
	}
}

Brain::Brain(const Brain & prototype)
{
	std::cout << "Copy constructor Brain called" << std::endl;
	*this = prototype;
}

Brain &Brain::operator = (const Brain &prototype)
{
	std::cout << "Copy assignment operator Brain called" << std::endl;
	if (this != &prototype)
	{
		for (int i = 0; i < 100; i++)
		{
			this->_ideas[i] = prototype._ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Destructor Brain called" << std::endl;
}

void	Brain::setIdeas(size_t i, std::string ideas)
{
	if (i < 100)
	{
		this->_ideas[i] = ideas;
	}
}

void	Brain::expressIdeas(size_t i)
{
	if (i < 100)
	{
		std::cout << _ideas[i] << std::endl;
	}
}
