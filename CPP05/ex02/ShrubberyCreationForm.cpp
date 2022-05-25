#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
		Form("ShrubberyCreationForm", 145, 137), _target("TreeForm")
{
	std::cout << "Default constructor ShrubberyCreationForm " << this->getName() << " called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
		Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "Constructor " << this->getName() << " called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & prototype) :
		Form(prototype.getName(), prototype.getGradeSign(), prototype.getGradeExecute())
{
	std::cout << "Copy constructor ShrubberyCreationForm called" << std::endl;
	*this = prototype;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &prototype)
{
	if (this != &prototype)
	{
		this->_target = prototype._target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor ShrubberyCreationForm " << this->getName() << " called" << std::endl;
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

const std::string ShrubberyCreationForm::_tree =
	"              * *\n"
	"           *    *  *\n"
	"      *  *    *     *  *\n"
	"     *     *    *  *    *\n"
	" * *   *    *    *    *   *\n"
	" *     *  *    * * .#  *   *\n"
	" *   *     * #.  .# *     *\n"
	"  *     .#.  #: #. * * *\n"
	" *   * * .#. ##.   *\n"
	"   *       #\n"
	"             #\n"
	"               #\n"
	"              .#\n"
	"              :#\n"
	"              ;#\n"
	"            ,##\n"
	"/\\/\\/\\/\\/\\/.######.\\/\\/\n";

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getGradeExecute() < executor.getGrade())
	{
		throw GradeTooLowException();
	}
	else
	{
		const std::string filename = this->_target + "_shrubbery";
		std::ofstream file(filename.c_str());
		if (!file.is_open())
		{
			std::cout << "File do not open!" << std::endl;
		}
		else
		{
			file << _tree;
			file.close();
		}
	}
}
