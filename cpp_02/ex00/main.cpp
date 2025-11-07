/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:25:17 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/04 15:29:19 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void){
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return 0;
}

/*
	- Integers: stores integers (whole numbers), without decimals, such as 123 or -123.
		Its size is usually 4 bytes. Meaning, it can store values from -2147483648 to 2147483647.
	- Float-point numbers: float is used to store floating-point numbers (decimals and exponentials).
		The size of float is 4 bytes, less precise than double.
	- Copy constructor: initializes a new object as a copy of an existing object.
		This is useful when passing an object by value or when we need to duplicate an object.
	- Copy asignment operator overload: assigns the value of one object to another already-existing object.
*/