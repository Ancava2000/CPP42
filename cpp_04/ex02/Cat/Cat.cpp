/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:39:55 by acarro-v          #+#    #+#             */
/*   Updated: 2025/12/16 07:24:35 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	std::cout << "Cat Default constructor called" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other){
	std::cout << "Cat Copy constructor called" << std::endl;
	this->brain = new Brain(*other.brain);
}

Cat &Cat::operator=(const Cat &other){
	std::cout << "Cat Operator constructor called" << std::endl;
	if (this != &other){
		Animal::operator=(other);
		delete this->brain;						
		this->brain = new Brain(*other.brain);	
	}
	return (*this);
}

Cat::~Cat(){
	std::cout << "Cat Destructor called" << std::endl;
	delete this->brain;
}

void Cat::makeSound(void) const{
	std::cout << "Cat: MEOW MEOW MEOW" << std::endl;
}
