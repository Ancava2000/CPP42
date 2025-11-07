/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 12:14:07 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/01 13:06:43 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, str name){
	int i;
	Zombie* horde;

	horde = new Zombie[N];
	i = 0;
	while (i < N){
		std::ostringstream oss;  // Change int to str
		oss << name << " " << (i + 1);
		horde[i++].setName(oss.str()); // Return all the string
	}
	return horde;
}