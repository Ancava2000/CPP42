/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 09:06:03 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/01 09:25:25 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(str name) : name(name){
	std::cout << name << " zombie is awake" << std::endl;
}

Zombie::~Zombie(void){
	std::cout << name << " zombie is dead" << std::endl;
}

void Zombie::announce(void){
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}