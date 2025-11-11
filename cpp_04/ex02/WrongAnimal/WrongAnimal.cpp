/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 07:14:51 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/10 07:31:24 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Default"){
	std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type) : type(type){
	std::cout << "WrongAnimal Parameter constructor called" << std::endl;

}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type){
	std::cout << "WrongAnimal Copy constructor called" << std::endl;

}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other){
	std::cout << "WrongAnimal Operator constructor called" << std::endl;
	if (this != &other){
		type = other.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

std::string WrongAnimal::getType(void) const{
	return this->type;
}

void WrongAnimal::makeSound(void) const{
	std::cout << "WrongAnimal of type " << type << " made a wrong sound" << std::endl;
}