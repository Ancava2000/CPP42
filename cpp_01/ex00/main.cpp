/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 09:17:20 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/01 12:11:55 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
	Zombie zombie("Ana");
	zombie.announce();

	randomChump("Mario");

	Zombie* izombie = newZombie("Andrea");
	izombie -> announce();
	delete (izombie);

	return (0);
}

/*
Two forms to create objects:
	- Stack: limited segment of memory that stores temporary variables created by a function.
		In stack, variables are declared, stored and initialized during runtime.
		Automatically destroyed or clean. Variables cannot be resized.
		Like a normal variable (type_of_variable + name_of_variable).
		Use member function with .  zombie.announce()
		pe: Zombie zombie();
	- Heap (like malloc): memory areas allocated to each program.
		Can be dynamically allocated, unlike memory allocated to stacks.
		This memory is also global, which means that it can be accessed and modified from wherever in the program,
		instead of being localized by the function in which it is allocated.
		Created with new + type_of_variable. Needs *.
		Use function with ->  izombie -> announce()
		pe: Zombie* izombie = new Zombie();
			Zombie* izombie;
			izombie = new Zombie();
*/