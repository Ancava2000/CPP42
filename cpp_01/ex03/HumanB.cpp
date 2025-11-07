/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 14:33:29 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/01 15:25:38 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(0){}

HumanB::~HumanB(void){}

void HumanB::setWeapon(Weapon& weapon){
	this->weapon = &weapon;
}

void HumanB::attack(){
	if (this->weapon)
		std::cout << this->name << " attack with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " has not a weapon to attack " << std::endl;
}