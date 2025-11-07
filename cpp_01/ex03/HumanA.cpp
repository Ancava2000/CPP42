/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 14:33:34 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/01 15:36:33 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon){}

HumanA::~HumanA(void){}

void HumanA::attack(){
	std::cout << this->name << " attack with their " << this->weapon.getType() << std::endl;
}