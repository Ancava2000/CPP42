/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:39:52 by acarro-v          #+#    #+#             */
/*   Updated: 2025/12/16 07:50:33 by acarro-v         ###   ########.fr       */
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
		virtual ~Animal();  

		std::string getType(void) const;
		virtual void makeSound(void) const = 0; // Pure virtual function. Tranforms Animal into an abstract class
};

#endif

/*
	A pure virtual function is a virtual function with no implementation in the base class, declared using = 0.
	A class with at least one pure virtual function is an abstract class that cannot be instantiated (p.e: Animal animal;)
	and serves as a blueprint for derived classes (p.e: when a pointer is used, Animal* array[] -> array[1] = new Cat()), which must provide their own implementation.
	
	They are useful in polymorphism where different classes share the same interface but have different behaviors.
*/