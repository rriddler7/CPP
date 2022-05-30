#include <iostream>
#include <string>	//strlen
#include <cctype>	//isdigit, isspace, isalnum
#include <cstdlib>	//atof
#include <cmath>	//isfinite
#include <limits>	//numeric_limits
#include <iomanip>	//setprecision

double	parse_arg(const char *str)
{
	double dbl;
	std::string s;
	int i = 0;
	int j;

	if (std::strlen(str) == 1 && !(std::isdigit(str[0])))
	{
		std::cout << str[0] << std::endl;
		return str[0];
	}
	while (str[i] && std::isspace(str[i]))
		i++;
	j = i;
	while (str[j] && (std::isalnum(str[j]) || str[j] == '.' || str[j] == '-' || str[j] == '+'))
		j++;
	s = std::string(str, i, j);
	dbl = atof(s.c_str());
	if (dbl == 0 && !(s[0] == '0' || (s[0] == '.' && s[1] == '0')
				|| ((s[0] == '-' || s[0] == '+' )
					&& (s[1] == '0' || s[1] == '.'))))
		throw (std::logic_error("Uncorrect argument!"));
	if (!std::strncmp(str, "nan", std::strlen(str)) || !std::strncmp(str, "nanf", std::strlen(str)))
		dbl = std::numeric_limits<double>::quiet_NaN();
	else if (!std::strncmp(str, "inf", std::strlen(str)) || !std::strncmp(str, "inff", std::strlen(str)))
		dbl = std::numeric_limits<double>::infinity();
	else if (!std::strncmp(str, "-inf", std::strlen(str)) || !std::strncmp(str, "-inff", std::strlen(str)))
		dbl = std::numeric_limits<double>::infinity() * (-1);

	return dbl;
}

void	castToChar(double dbl)
{
	char	chr;

	if (dbl < 0 || dbl > 127 || !std::isfinite(dbl))
	{
		std::cout << "char: impossible" << std::endl;
	}
	else if (dbl < 32 || dbl > 126)
	{
		std::cout << "char: Non displayable" << std::endl;
	}
	else
	{
		chr = static_cast<char>(dbl);
		std::cout << "char: " << chr << std::endl;
	}
}

void	castToInt(double dbl)
{
	int	nmb;

	if (dbl < INT_MIN || dbl > INT_MAX || !std::isfinite(dbl))
	{
		std::cout << "int: impossible" << std::endl;
	}
	else
	{
		nmb = static_cast<int>(dbl);
		std::cout << "int: " << nmb << std::endl;
	}
}

void	castToFloat(double dbl)
{
	float	flt;

	flt = static_cast<float>(dbl);
	if (flt == ceil(flt))
	{
		std::cout << std::fixed << std::setprecision(1);
	}
	std::cout << "float: " << flt << "f" << std::endl;
}

int main(int argc, char **argv)
{
	double	dbl;
	if (argc != 2)
	{
		std::cout << "Incorrect number of arguments!" << std::endl;
		return 1;
	}
	try
	{
		dbl = parse_arg(argv[1]);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return 2;
	}
	castToChar(dbl);
	castToInt(dbl);
	castToFloat(dbl);
	std::cout << "double: " << dbl << std::endl;
	return 0;
}
