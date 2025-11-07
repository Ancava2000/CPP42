/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:16:06 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/04 14:27:32 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << "ScavTrap created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << "ScavTrap with name " << _name << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other){
	std::cout << "ScavTrap copied" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other){
	if(this != &other){
		ClapTrap::operator=(other);
	}
	std::cout << "ScavTrap assigned" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void){
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target){
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::gateKeeper(void){
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
}