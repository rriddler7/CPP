#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
		Form("PresidentialPardonForm", 25, 5), _target("Nobody")
{
	std::cout << "Default constructor PresidentialPardonForm " << this->getName() << " called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
		Form("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "Constructor " << this->getName() << " called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & prototype) :
		Form(prototype.getName(), prototype.getGradeSign(), prototype.getGradeExecute())
{
	std::cout << "Copy constructor PresidentialPardonForm called" << std::endl;
	*this = prototype;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &prototype)
{
	if (this != &prototype)
	{
		this->_target = prototype._target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor PresidentialPardonForm " << this->getName() << " called" << std::endl;
}

std::string	PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (this->getGradeExecute() < executor.getGrade())
		{
			throw GradeTooHighException();
		}
		else
		{
			std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << "PresidentialPardonForm couldn’t execute by " << executor.getName() << " because " << e.what() << std::endl;
	}
}
