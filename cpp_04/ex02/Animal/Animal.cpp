/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:39:50 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/11 06:23:45 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Default"){
	std::cout << "Animal " << type << " constructor called" << std::endl;
}

Animal::Animal(const std::string& type) : type(type){
	std::cout << "Animal " << type << " Parameter constructor called" << std::endl;

}

Animal::Animal(const Animal& other) : type(other.type){
	std::cout << "Animal " << type << " Copy constructor called" << std::endl;

}

Animal &Animal::operator=(const Animal& other){
	std::cout << "Animal " << type << " Operator constructor called" << std::endl;
	if (this != &other){
		type = other.type;
	}
	return (*this);
}

Animal::~Animal(){
	std::cout << "Animal " << type << " Destructor called" << std::endl;
}

std::string Animal::getType(void) const{
	return this->type;
}