/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:47:44 by acarro-v          #+#    #+#             */
/*   Updated: 2025/12/16 07:46:06 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "../Animal/Animal.hpp"
#include "../Brain/Brain.hpp"

class Dog : public Animal{
	private:
		Brain* brain;						
	public:
		Dog();
		Dog(const Dog &other);				
		Dog& operator=(const Dog &other);	
		~Dog();

		void makeSound(void) const;
};

#endif