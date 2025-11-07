/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:30:39 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/04 14:45:32 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void){
	std::cout << "CONSTRUCTORS----" << std::endl;
	FragTrap machine1("Ana");
	FragTrap machine2("David");

	std::cout << "\nMETHODS----" << std::endl;
	machine1.highFiveGuys();
	machine2.highFiveGuys();

	std::cout << "\nPARENT METHODS----" << std::endl;
	machine1.attack("David");
	machine2.attack("Ana");
	
	machine1.takeDamage(30);
	machine2.takeDamage(30);
	
	machine1.beRepaired(40);
	machine2.beRepaired(5);
	
	std::cout << "\nDESTRUCTOR----" << std::endl;

	return (0);
}