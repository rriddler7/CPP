#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
		Form("RobotomyRequestForm", 72, 45), _target("MyJob")
{
	std::cout << "Default constructor RobotomyRequestForm " << this->getName() << " called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
		Form("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "Constructor " << this->getName() << " called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & prototype) :
		Form(prototype.getName(), prototype.getGradeSign(), prototype.getGradeExecute())
{
	std::cout << "Copy constructor RobotomyRequestForm called" << std::endl;
	*this = prototype;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &prototype)
{
	if (this != &prototype)
	{
		this->_target = prototype._target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor RobotomyRequestForm " << this->getName() << " called" << std::endl;
}

std::string	RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (this->getGradeExecute() < executor.getGrade())
		{
			throw GradeTooHighException();
		}
		else
		{
			int amount = rand();
			std::srand(std::time(0));
			std::cout << "Drrrrrrrrrrrrrrrrrrrrrrrrrr" << std::endl;
			if (amount % 2 == 0)
				std::cout << this->_target << " has been robotomized successfully" << std::endl;
			else
				std::cout << this->_target << " failed" << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << "RobotomyRequestForm couldn’t execute by " << executor.getName() << " because " << e.what() << std::endl;
	}
}
