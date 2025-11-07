/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:26:59 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/03 15:01:22 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
	private:
		int _value;
		static const int _fractionalbit = 8;
	public:
		Fixed();								// Constructor
		Fixed(const Fixed &other);				// Copy constructor
		Fixed &operator=(const Fixed &other);	// Copy assignment operator
		~Fixed();								// Destructor

		int getRawBits(void)const;				// Returns value
		void setRawBits(int const raw);			// Sets value
};

#endif