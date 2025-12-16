/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:36:57 by acarro-v          #+#    #+#             */
/*   Updated: 2025/12/16 07:46:13 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
	std::cout << "Dog Default constructor called" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other){
	std::cout << "Dog Copy constructor called" << std::endl;
	this->brain = new Brain(*other.brain);
}

Dog &Dog::operator=(const Dog &other){
	std::cout << "Dog Operator constructor called" << std::endl;
	if (this != &other){
		Animal::operator=(other);
		delete this->brain;						
		this->brain = new Brain(*other.brain);	
	}
	return (*this);
}

Dog::~Dog(){
	std::cout << "Dog Destructor called" << std::endl;
	delete this->brain;
}

void Dog::makeSound(void) const{
	std::cout << "Dog: BARK BARK BARK" << std::endl;
}