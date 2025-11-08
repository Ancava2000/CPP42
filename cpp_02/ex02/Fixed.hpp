/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 13:58:44 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/08 14:52:36 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath> 

class Fixed{
	private:
		int _rawBits;
		static const int _fractionalbits = 8;
	public:
		Fixed();
		Fixed(const int Int);
		Fixed(const float Float);							
		Fixed(const Fixed &other);				
		Fixed& operator=(const Fixed &other);
		~Fixed();								
		
		bool operator>(const Fixed &other) const;
		bool operator<(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;
		
		Fixed operator+(const Fixed &other) const;
		Fixed operator-(const Fixed &other) const;
		Fixed operator*(const Fixed &other) const;
		Fixed operator/(const Fixed &other) const;

		Fixed& operator--(void);    // &: Returns a reference (*this) to a modified object that already exists.
		Fixed& operator++(void);
		Fixed operator--(int);		// Without &: Returns a new object.
		Fixed operator++(int);
		
		static Fixed& min(Fixed& a, Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);

		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &nbr);

#endif