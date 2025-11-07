/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 14:35:14 by acarro-v          #+#    #+#             */
/*   Updated: 2025/08/27 14:59:23 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char **av)
{
	int	i = 1;
	int	j = 0;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return 0;
	}
	while (i < ac)
	{
		while (av[i][j] != '\0')
		{
			std::cout << (char) std::toupper(av[i][j]);
			j++;
		}
		std::cout << " ";
		j = 0;
		i++;
	}
	std::cout << std::endl;
	return 0;
}
