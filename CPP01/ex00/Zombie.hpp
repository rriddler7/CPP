#ifndef Zombie_HPP
# define Zombie_HPP

# include <iostream>

class Zombie
{
	private:
		std::string name;
	public:

		Zombie(std::string);
		~Zombie(void);

		void	setName(std::string);
		void	announce(void);
};

#endif
