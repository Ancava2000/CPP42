/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:39:55 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/10 13:00:19 by acarro-v         ###   ########.fr       */
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
		delete this->brain;						// delete actual brain
		this->brain = new Brain(*other.brain);	// create new brain with the content of the copied one
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

/*
	- Shallow copy: Copy the pointer (direction).
		P.e: In the copy constructor, this->brain = other.brain
		In this case, both cat1.brain and cat2.brain point to the same memory direction.
		If one is modified or deleted it affects the other.
	- Deep copy: Create a new indepent copy.
*/