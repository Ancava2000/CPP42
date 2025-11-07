/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 14:32:07 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/07 16:54:38 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() 
{
    {
        Weapon club = Weapon("crude spiked club");  
        
		HumanA bob("Bob", club);                    
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        
		HumanB jim("Jim");
		jim.attack();
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return (0);
}

/*
The goal is to understand why HumanA uses a reference (&) and HumanB uses a pointer (*) to a Weapon
	- References:
		- HumanA has a reference to an existing object, which has to be initialized in the constructor
			because a reference can't be null or reasigned later.
		- As a result, HumanA always has a weapon and can't change it later.
		- HumanA.weapon directly refers to the same object (p.e: club).
		- If the type of weapon is changed, the reference changes too.
		- Since the reference is always valid, HumanA can safely call:
			this->weapon.getType(), without checking if the weapon exists.
	- Pointer:
		- A pointer can be null or weapon = 0. HumanB can start without a weapon.
		- A pointer can be changed.
		- Needs a setter to save the direction.
		- The pointer refers to the same addres that the weapon. If the original is changes,
			the pointer is changed too.
		- Method called like: weapon->getType().
*/