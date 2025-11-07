/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 06:16:34 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/04 11:59:29 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){
	ClapTrap default_claptrap;
	ClapTrap parameter_claptrap("Ana");
	ClapTrap copy_claptrap(default_claptrap);
	ClapTrap operator_claptrap;

	operator_claptrap = copy_claptrap;

	parameter_claptrap.attack("enemy");
	parameter_claptrap.takeDamage(5);
	parameter_claptrap.beRepaired(2);
	parameter_claptrap.takeDamage(20);
	parameter_claptrap.takeDamage(20);
	parameter_claptrap.attack("enemy");
	parameter_claptrap.beRepaired(10);

	return (0);
}