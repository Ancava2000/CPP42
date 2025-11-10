/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:39:52 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/10 07:59:59 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const std::string& type);
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		virtual ~Animal();  // virtual 

		std::string getType(void) const;
		virtual void makeSound(void) const;  // virtual
};

#endif

/*
	When you declare an inherit class on the heap (Animal* cat = new Cat()), you have:
		- Static type: Animal* (what the compiler sees).
		- Dynamic type: Cat (what's actually in the dynamic memory).
	You can have a shared method (with the same name but different actions) in both types. 
	In these cases (both types and shared method) the compiler only see the static type, so it only calls the
	method of the static type ignoring the actual object type.
	With virtual, the program at runtime checks the virtual table to find the correct implementation based
	on the dynamic type.
	You have to use virtual in:
		- Methods in the base class that are overrided by derived class (same name, different actions).
		- ALWAYS in destructor in base classes: without virtual only deletes base class, causing memory leaks.
*/