/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 12:13:11 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/01 12:48:10 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){
	return ;
}

Zombie::~Zombie(void){
	std::cout << this -> name << " zombie is dead" << std::endl;
}

void Zombie::setName(str name){
	this -> name = name;
}

void Zombie::announce(void){
	std::cout << this -> name << " BraiiiiiiinnnzzzZ..." << std::endl;
}