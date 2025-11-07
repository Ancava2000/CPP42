/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:30:20 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/04 14:58:44 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0){
	std::cout << "Default constructor called" << std::endl;
}

// Copy constructor:
// 	- Const: The original object being copied can't be modified.
//	- &other: Pass the object by reference and not by value. Avoids an unnecessary copy.
//	- _value = other.value: Assigns the original value (other) to the value of the new object.
Fixed::Fixed(const Fixed &other){
	std::cout << "Copy constructor called" << std::endl;
	_value = other._value;
}

// Copy asignment operator:
//	- &Fixed: Returns a reference of the object Fixed.
//	- operator=: Overload of "=". Redefines how the operator works. 
//	- this: Pointer to the actual object (a = b, "this" points to "a" and "other" is "b").
//	- *this: Dereference the "this" pointer to get the current object (a).

Fixed &Fixed::operator=(const Fixed &other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other){
		_value = other._value;
	}
	return (*this);
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void)const{
	return (this->_value);
}

void Fixed::setRawBits(int const raw){
	this->_value = raw;
}