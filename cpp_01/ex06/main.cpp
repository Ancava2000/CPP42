/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 11:22:00 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/07 17:07:24 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char** av){
	if (ac != 2){
		std::cout << "Use ./harlFilter + level" << std::endl;
		return (1);
	}

	Harl harl;
	int i = 0;
	int index = -1;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	while(i < 4){
		if (av[1] == levels[i]){
			index = i;
			break ;
		}
		i++;
	}
	switch (index){
		case 0:
			harl.complain("DEBUG");
		case 1:
			harl.complain("INFO");
		case 2:
			harl.complain("WARNING");
		case 3:
			harl.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return(0);
}