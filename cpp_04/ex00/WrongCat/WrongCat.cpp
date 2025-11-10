/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 07:14:56 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/10 07:33:04 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){
	std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other){
	std::cout << "WrongCat Copy constructor called" << std::endl;

}

WrongCat& WrongCat::operator=(const WrongCat& other){
	std::cout << "WrongCat Operator constructor called" << std::endl;
	if (this != &other){
		WrongAnimal::operator=(other);
	}
	return (*this);
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat Destructor called" << std::endl;
}

void WrongCat::makeSound(void) const{
	std::cout << "WrongCat: QUACK" << std::endl;
}