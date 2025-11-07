/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 06:16:34 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/04 12:08:02 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void){
	
	std::cout << "DEFAULT----" << std::endl;
	ScavTrap default_scavtrap;
	default_scavtrap.attack("enemy");
	default_scavtrap.gateKeeper();
	
	std::cout << "NAMED----" << std::endl;
	ScavTrap parameter_scavtrap("Ana");
	parameter_scavtrap.attack("enemy");
	parameter_scavtrap.gateKeeper();

	std::cout << "COPY----" << std::endl;
	ScavTrap copy_scavtrap(default_scavtrap);
	copy_scavtrap.attack("enemy");
	copy_scavtrap.gateKeeper();
	
	std::cout << "OPERATOR----" << std::endl;
	ScavTrap operator_scavtrap;
	operator_scavtrap = copy_scavtrap;
	operator_scavtrap.attack("enemy");
	operator_scavtrap.gateKeeper();
	
	std::cout << "DESTRUCTOR----" << std::endl;
	
	return (0);
}