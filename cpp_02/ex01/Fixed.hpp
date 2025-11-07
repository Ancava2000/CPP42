/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:49:47 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/07 17:15:44 by acarro-v         ###   ########.fr       */
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
		Fixed &operator=(const Fixed &other);
		~Fixed();								
		
		int getRawBits(void)const;		
		void setRawBits(int const raw);	
		
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &nbr);

#endif