/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:47:44 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/10 12:45:58 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "../Animal/Animal.hpp"
#include "../Brain/Brain.hpp"

class Dog : public Animal{
	private:
		Brain* brain;						// Pointer to brain object
	public:
		Dog();
		Dog(const Dog &other);				// Deep copy of brain
		Dog& operator=(const Dog &other);	// Deep copy of brain
		~Dog();

		void makeSound(void) const;
};

#endif