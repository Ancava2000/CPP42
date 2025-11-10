/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:39:57 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/10 12:50:17 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "../Animal/Animal.hpp"
#include "../Brain/Brain.hpp"

class Cat : public Animal{
	private:
		Brain* brain;						// Pointer to brain object
	public:
		Cat();
		Cat(const Cat &other);				// Deep copy of brain
		Cat& operator=(const Cat &other);	// Deep copy of brain
		~Cat();

		void makeSound(void) const;
};

#endif

/*
	With the pointer (Brain* brain) you have to use new (memory in heap) in each constructor and delete
	in the destructor (prevent memory leaks). You have to implement deep copy manually.
	Without the pointer everything is managed automatically.
*/