#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class Bureaucrat {
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat&);
	Bureaucrat & operator = (const Bureaucrat &);
	~Bureaucrat();
	std::string	getName() const;
	int		getGrade();
	void	raise(int grade);
	void	lower(int grade);
private:
	Bureaucrat();
	const std::string	_name;
	int					_grade;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &иureaucrat);

#endif
