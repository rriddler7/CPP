#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat;

# include "Form.hpp"

class Bureaucrat {
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &);
	Bureaucrat & operator = (const Bureaucrat &);
	~Bureaucrat();
	std::string	getName() const;
	int		getGrade() const;
	void	upgrade();
	void	downgrade();
	void	signForm(Form &form);
private:
	Bureaucrat();
	const std::string	_name;
	int					_grade;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &bureaucrat);

#endif
