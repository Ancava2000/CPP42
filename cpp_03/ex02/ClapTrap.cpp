/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 06:16:38 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/04 14:44:43 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hit_points(10), _energy_points(10), _attack_damage(0){
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string _name) : _name(_name), _hit_points(10), _energy_points(10), _attack_damage(0){
	std::cout << "Constructor with parameters called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : _name(other._name), _hit_points(other._hit_points), _energy_points(other._energy_points), _attack_damage(other._attack_damage) {
	std::cout << "Copy constructor called" << std::endl;
}	

ClapTrap& ClapTrap::operator=(const ClapTrap &other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other){
		_name = other._name;
		_hit_points = other._hit_points;
		_energy_points = other._energy_points;
		_attack_damage = other._attack_damage;
	}
	return (*this);
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target){
	if(_hit_points < 1){
		std::cout << _name << " can't attack, he is already dead" << std::endl; 
	}
	else if (_energy_points < 1){
		std::cout << _name << " can't attack, no energy points left" << std::endl;
	}
	else{
		_energy_points--;
		std::cout << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	if(_hit_points < 1){
		std::cout << _name << " is already destroyed" << std::endl; 
	}
	else if(amount >= static_cast<unsigned int>(_hit_points)){
		_hit_points -= amount;
		std::cout << _name << " has taken " << amount << " points of damage, " << _name << " is destroyed" << std::endl;
	}
	else{
		_hit_points -= amount;
		std::cout << _name << " has taken " << amount << " points of damage" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	if(_hit_points < 1){
		std::cout << _name << " can't be repaired, he is already dead" << std::endl; 
	}
	else if (_energy_points < 1){
		std::cout << _name << " can't be repaired, no energy points left" << std::endl;
	}
	else if(_hit_points + amount <= 100){
		_hit_points += amount;
		_energy_points--;
		std::cout << _name << " restored " << amount << " hit points" << std::endl;
	}
	else{
		_hit_points = 100;
		_energy_points--;
		std::cout << _name << " restored all hit points" << std::endl;
	}
}