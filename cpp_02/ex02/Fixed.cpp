/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 13:58:47 by acarro-v          #+#    #+#             */
/*   Updated: 2025/12/10 14:35:24 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//[CONSTRUCTORS]

Fixed::Fixed() : _rawBits(0){}

Fixed::Fixed(const int Int) : _rawBits(Int << _fractionalbits) {}

Fixed::Fixed(const float Float) : _rawBits(roundf(Float * (1 << _fractionalbits))){}

Fixed::Fixed(const Fixed &other) : _rawBits(other._rawBits){}

Fixed& Fixed::operator=(const Fixed &other){
	if (this != &other){
		_rawBits = other._rawBits;
	}
	return (*this);
}

//[DESTRUCTOR]

Fixed::~Fixed(){}

//[COMPARISON OPERATORS]

bool Fixed::operator>(const Fixed &other) const{
	return (_rawBits > other._rawBits);
}

bool Fixed::operator<(const Fixed &other) const{
	return (_rawBits < other._rawBits);
}

bool Fixed::operator>=(const Fixed &other) const{
	return (_rawBits >= other._rawBits);
}

bool Fixed::operator<=(const Fixed &other) const{
	return (_rawBits <= other._rawBits);
}

bool Fixed::operator==(const Fixed &other) const{
	return (_rawBits == other._rawBits);
}

bool Fixed::operator!=(const Fixed &other) const{
	return (_rawBits != other._rawBits);
}

//[MATH OPERATORS]

Fixed Fixed::operator+(const Fixed &other) const{
<<<<<<< HEAD
	return (_rawBits + other._rawBits) / (1 << _fractionalbits);;
}

Fixed Fixed::operator-(const Fixed &other) const{
	return (_rawBits - other._rawBits) / (1 << _fractionalbits);;
=======
	return (_rawBits + other._rawBits) / (1 << _fractionalbits);
}

Fixed Fixed::operator-(const Fixed &other) const{
	return (_rawBits - other._rawBits) / (1 << _fractionalbits);
>>>>>>> 55da8dbaa2064150da721095e3f7f468cea0b497
}

Fixed Fixed::operator*(const Fixed &other) const{
	Fixed result;
	result._rawBits = (_rawBits * other._rawBits) / (1 << _fractionalbits);
	return (result);
}

Fixed Fixed::operator/(const Fixed &other) const{
	Fixed result;
	result._rawBits = static_cast<float>(_rawBits) / static_cast<float>(other._rawBits) * (1 << _fractionalbits);
	return (result);}

//[INCREASE AND DECREASE OPERATORS]

Fixed& Fixed::operator--(void){
	_rawBits--;
	return *this;
}   
 
Fixed& Fixed::operator++(void){
	_rawBits++;
	return *this;
}

Fixed Fixed::operator--(int){
	Fixed result;
	result._rawBits = _rawBits;
	_rawBits--;
	return (result); 
}	
	
Fixed Fixed::operator++(int){
	Fixed result;
	result._rawBits = _rawBits;
	_rawBits++;
	return (result); 	
}

//[METHODS]

Fixed& Fixed::min(Fixed& a, Fixed& b){
	return (a._rawBits < b._rawBits) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b){
	return (a._rawBits > b._rawBits) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b){
	return (a._rawBits < b._rawBits) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b){
	return (a._rawBits > b._rawBits) ? a : b;
}

float Fixed::toFloat(void) const{
	return static_cast<float>(_rawBits) / (1 << _fractionalbits);
}

int Fixed::toInt(void) const{
	return _rawBits >> _fractionalbits;
}

//[OPERATOR <<]

std::ostream &operator<<(std::ostream &os, const Fixed &nbr){
	os << nbr.toFloat();
	return (os);
}
