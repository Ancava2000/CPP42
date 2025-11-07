/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 08:22:31 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/07 16:59:45 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (void){
	Harl harl;

	std::cout << "-----DEBUG-----" << std::endl;
	harl.complain("DEBUG");

	std::cout << "-----INFO-----" << std::endl;	
	harl.complain("INFO");

	std::cout << "-----WARNING-----" << std::endl;	
	harl.complain("WARNING");

	std::cout << "-----ERROR-----" << std::endl;
	harl.complain("ERROR");

	std::cout << "-----NO VALID-----" << std::endl;	
	harl.complain("VALID");

	return (0);
}