/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 12:13:01 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/01 12:58:29 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
	int i = 0;
	int N;
	str name;
	
	std::cout << "Indicate a name: ";
	std::cin >> name;
	std::cout << "Indicate a number: ";
	std::cin >> N;
	Zombie* horde = zombieHorde(N, name);
	while (i < N)
		horde[i++].announce();
	delete [] horde;
}