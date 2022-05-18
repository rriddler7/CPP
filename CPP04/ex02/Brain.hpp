#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
public:
	Brain();
	Brain(const Brain&);
	Brain & operator = (const Brain &);
	~Brain();
	void	setIdeas(size_t i, std::string ideas);
	void	expressIdeas(size_t i);
protected:
	std::string		_ideas[100];
};

#endif
