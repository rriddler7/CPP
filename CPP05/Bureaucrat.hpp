#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class Bureaucrat {
public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat&);
	Bureaucrat & operator = (const Bureaucrat &);
	~Bureaucrat();
	std::sting	getName() const;
	size_t		getGrade();

private:
	std::string	_name const;
	size_t		_grade;
};


#endif
