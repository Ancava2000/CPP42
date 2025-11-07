/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 08:50:21 by acarro-v          #+#    #+#             */
/*   Updated: 2025/10/29 14:56:22 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

#include <iostream>	// std::cout, std::cin, std::getline
#include <iomanip>	// std::setw
#include <cstdlib>	// std::system
#include <unistd.h>	// sleep
#include <sstream>	// std::stringstream

class Phonebook{
	private:
		// General Attributes
		Contact contact[8];
		int		index;
		int		nb_contacts;
	
	public:
		// Constructor
		Phonebook();
	
		// Methods
		str		get_input(const str &prompt);
		void	add_contact();
		str		format(str text);
		void 	display_contact_summary(int i);
		void	display_contact_info(int index);
		void 	search_contact();
};

#endif