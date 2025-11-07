/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:46:24 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/04 16:31:16 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0){
	std::cout << "Default constructor called" << std::endl;
}

/*
	Converts int to the corresponding fixed-point value.
	Shifts the bits 8 positions to the left.
	P.e: 5 << 8 = 5 * 256 = 1280
		5 = 101 (binary).
		1280 = 10100000000 (101 8 postions to the left).
*/
Fixed::Fixed(const int Int) : _rawBits(Int << _fractionalbits) {
	std::cout << "Integer constructor called" << std::endl;
}

/*
    Converts float to the corresponding fixed-point value.
    Multiplies by 256 (2^8) and rounds to nearest integer.
    Example: 42.5 * 256 = 10880.0 → rounded to 10880
        42.5 = 101010.1 (binary)
        10880 = 10101010000000 (binary, represents 42.5 in fixed-point)
*/
Fixed::Fixed(const float Float) : _rawBits(roundf(Float * (1 << _fractionalbits))){
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) : _rawBits(other.getRawBits()){
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other){
		_rawBits = other.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

/*
	Converts _rawBits (the fixed point) to float before divide.
	1 << _fractionalbits = shifts the bits 8 positions to the left.
		1 = 00000001 (binary).
		1 << 8 = 100000000 (binary) = 256 (decimal)
*/
float Fixed::toFloat(void) const{
	return static_cast<float>(_rawBits) / (1 << _fractionalbits);
}
/*
	Converts _rawBits (the fixed point) to int.
	_rawBits >> _fractional bits = shift 8 bits to the right.
		_rawBits(fixed) 1280 = 10100000000
		return : 5 = 101 (8 bits shift)
*/
int Fixed::toInt(void) const{
	return _rawBits >> _fractionalbits;
}

int Fixed::getRawBits(void)const{
	return (this->_rawBits);
}

void Fixed::setRawBits(int const raw){
	this->_rawBits = raw;
}

/*
	- ostream &os: reference named "os" to an output stream.
     ostream is the pipe (cout, ofstream, cerr, etc.) that carries
     data to its destination (terminal, file, error stream...).
     
     For example: std::cout << myFixed;
        - cout is passed as 'os'
        - myFixed is passed as 'fixed'
     
     We are teaching the << operator how to handle Fixed objects
     by converting them to float before sending to the stream.
*/
std::ostream &operator<<(std::ostream &os, const Fixed &nbr){
	os << nbr.toFloat();
	return (os);
}
