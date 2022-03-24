/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriddler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 20:04:47 by rriddler          #+#    #+#             */
/*   Updated: 2022/03/21 20:04:55 by rriddler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
    int n;
	int m;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
    else if (argc > 1)
    {
        n = 1;
        while (n < argc)
        {
            m = 0;
            while (argv[n][m] != '\0')
            {
                argv[n][m] = toupper(argv[n][m]);
                if (argv[n][m] != '\'' && argv[n][m] != '"')
                    std::cout << argv[n][m];
                m++;
            }
            n++;
        }
        std::cout << std::endl;
	    return (0);
    }
}
