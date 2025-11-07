/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:58:15 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/04 16:23:46 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) 
{

	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);  // f is to indicate is a float number 
	Fixed const d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return (0);
}

/*
Fixed point number: a way to represent decimal numbers (23, 12.67 ...) using only integers in binary.
    Instead of using float or double (which have variable precision),
    you use an integer where some bits represent the whole part and 
    other bits represent the fractional part.

	Example: If you use an int (32 bits) with 8 fractional bits (shift the bits 8 positions):
			5 = 00000000 00000000 00000000 00000101
			After << 8 = 00000000 00000000 00000101   00000000
						 [     24 bits whole      ] [8 bits Fractional]
	When you shift 8 bits, you are saying that those 8 rightmost bits are the fractional part.
	You can shift any number, you chose that number depending on the level of precision you want.

    With int you can manipulate bits directly because it's already in binary.
	With float you have to perform arithmetic operations because it's in a special format
	that doesn't allow direct bit manipulation.
	Conversions:
    • Int to fixed-point: shift left (value << 8)
      Example: 5 << 8 = 1280
    
    • Float to fixed-point: multiply by 2^8 (256), then round
      Example: 42.5 × 256 = 10,880
    
    • Fixed-point to float: divide by 256
      Example: 10,880 / 256 = 42.5
    
    • Fixed-point to int: shift right (value >> 8)
      Example: 1280 >> 8 = 5
    
    Binary Examples:    42.5 = 101010.1 (binary)
                		42.5 × 256 = 1010101000000000 (integer in binary)
                          		   = 10,880 (decimal, stored as integer)
						5 = 101 (binary)
						5 x 256 = 10100000000 (integer in binary)
						 		   = 1280 (decimal, stored as integer)
*/
