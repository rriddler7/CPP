#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;
	if (argc != 2)
	{
		std::cout << "Incorrect arguments!" << std::endl;
		return 1;
	}
	else
		harl.complain(std::string(argv[1]));
	return 0;
}
