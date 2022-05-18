#include "Harl.hpp"

Harl::Harl(void){}

Harl::~Harl(void){}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int	Harl::intLevel(std::string level)
{
	if (level == "DEBUG")
		return 1;
	else if (level == "INFO")
		return 2;
	else if (level == "WARNING")
		return 3;
	else if (level == "ERROR")
		return 4;
	return 0;
}

void	Harl::complain(std::string level)
{
	switch (intLevel(level))
	{
		case 1:
			debug();
			break;
		case 2:
			info();
			break;
		case 3:
			warning();
			break;
		case 4:
			error();
			break;
		default:
			std::cout << "Incorrect level!" << std::endl;
	}
}