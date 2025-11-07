/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 08:49:53 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/07 16:29:27 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

// Checks initial number of ac. Compare entered input with loop
int main(int ac, char **av) {
	(void)av;

	if (ac > 1){
		std::cout << "Too many arguments\n";
		return (0);
	}

	Phonebook phonebook;
	std::cout << "Hello! Welcome to your old Phonebook\n";
	sleep(1);
	std::system("clear");
	while (1){
		str input;
		std::cout << "Type ADD, SEARCH or EXIT\n";
		std::getline(std::cin, input);
		if (std::cin.eof()) {
			std::cout << "\nExiting...\n";
			return (0);
		}
		std::system("clear");
		if (input == "ADD")
			phonebook.add_contact();
		else if (input == "SEARCH")
			phonebook.search_contact();
		else if (input == "EXIT")
			return (0);
		else
			std::cout << "Wrong command\n";
		sleep(1);
		std::system("clear");
	}
}