/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:39:50 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/07 17:40:16 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Default"){
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(const std::string type) : type(type){
	std::cout << "Animal Parameter constructor called" << std::endl;

}

Animal::Animal(const Animal &other) : type(other.type){
	std::cout << "Animal Copy constructor called" << std::endl;

}

Animal &Animal::operator=(const Animal &other){
	std::cout << "Animal Operator constructor called" << std::endl;
	if (this != &other){
		type = other.type;
	}
	return (*this);
}

Animal::~Animal(){
	std::cout << "Animal Destructor called" << std::endl;
}

std::string Animal::getType(void) const{
	return this->type;
}

void Animal::makeSound(void) const{
	std::cout << "Animal of type " << type << " made a sound" << std::endl;
}