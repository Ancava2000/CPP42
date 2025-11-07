/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:16:06 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/04 14:30:12 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << "FragTrap created" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << "FragTrap with name " << _name << " created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other){
	std::cout << "FragTrap copied" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other){
	if(this != &other){
		ClapTrap::operator=(other);
	}
	std::cout << "FragTrap assigned" << std::endl;
	return (*this);
}

FragTrap::~FragTrap(void){
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFiveGuys(void){
	std::cout << "FragTrap " << _name << " requests a positive high-fives" << std::endl;
}