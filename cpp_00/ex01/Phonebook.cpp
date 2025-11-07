/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 08:50:18 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/07 16:34:47 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

// Constructor
Phonebook::Phonebook() : index(0), nb_contacts(0) {};

// Shows prompt and check input isn't empty
str Phonebook::get_input(const str &prompt){
	str input;

	while (1){
		std::cout << prompt;
		std::getline(std::cin, input);
		if (std::cin.eof())
			return "";
		if (input.empty()){
			std::cout << "Please enter input\n";
		}
		else
			break;
	}
	return (input);
}

// Add contact following an index:
//		1. Shows the string and check the typed input
// 		2. Returns that input to set the contact attribute
// 		3. Starts with an index of 0, adds 1 each iteration
// 		4. If the index is 8, it's set to 0 and substitute the old one
// 		5. Adds 1 nb_contacts until 7 (max is 8, goes from 0 to 7) 
void Phonebook::add_contact(){
	str input;

	contact[index].setFirstName(get_input("Enter First Name: "));
	if (std::cin.eof()) {
			std::cout << "\nExiting...\n";
			exit(0);
		}
	contact[index].setLastName(get_input("Enter Last Name: "));
	if (std::cin.eof()) {
			std::cout << "\nExiting...\n";
			exit(0);
		}
	contact[index].setNickname(get_input("Enter Nickname: "));
	if (std::cin.eof()) {
			std::cout << "\nExiting...\n";
			exit(0);
		}
	contact[index].setPhoneNumber(get_input("Enter Phone Number: "));
	if (std::cin.eof()) {
			std::cout << "\nExiting...\n";
			exit(0);
		}
	contact[index].setDarkestSecret(get_input("Enter Darkest Secret: "));
	if (std::cin.eof()) {
			std::cout << "\nExiting...\n";
			exit(0);
		}

	index = (index + 1) % 8;
	if (nb_contacts < 8)
		nb_contacts++;
}

// Checks the lenght of the text. If it's more than 10,
// shows form 0 to 9 and substitute the 10th character with "."
str Phonebook::format(str text){
	if (text.length() > 10)
		return text.substr(0, 9) + ".";
	return (text);
}

// Table with all contacts' short info  
void Phonebook::display_contact_summary(int i){
	std::cout << std::setw(5) << i << "|";
	std::cout << std::setw(10) << format(contact[i].getFirstName()) << "|";
	std::cout << std::setw(10) << format(contact[i].getLastName()) << "|";
	std::cout << std::setw(10) << format(contact[i].getNickname()) << "|\n";
}

// Complete contact info considering the index
void Phonebook::display_contact_info(int index){
	std::cout << "\n------Contact Information------\n";
	std::cout << "First Name:   " << contact[index].getFirstName() << "\n";
	std::cout << "Last Name:   " << contact[index].getLastName() << "\n";
	std::cout << "Nickname:   " << contact[index].getNickname() << "\n";
	std::cout << "Phone Number:   " << contact[index].getPhoneNumber() << "\n";
	std::cout << "Darkest Secret:   " << contact[index].getDarkestSecret() << "\n";
	std::cout << "------Contact Information------\n";
	sleep(2);
}

// Function to show a table with all the contacts' info
// and to see the complete info of a specific contact depending on index
void Phonebook::search_contact(){
	if (nb_contacts == 0){
		std::cout << "There are no contacts available\n";
		return ;
	}
	int i = 0;
	
	std::cout << std::setw(5) << "Index" << "|";
	std::cout << std::setw(10) << "Firstname" << "|";
	std::cout << std::setw(10) << "Lastname" << "|";
	std::cout << std::setw(10) << "Nickname" << "|\n";
	while (i < nb_contacts){
		display_contact_summary(i);
		i++;
	}
	str input;
	int index;
	
	while (1){
		std::cout << "Enter a contact's index to see all their information\n";
		std::getline(std::cin, input);
		if (std::cin.eof()) {
			std::cout << "\nExiting...\n";
			exit(0);
		}
		if (input.empty())
			break;
		std::stringstream ss(input);
		if (!(ss >> index) || index < 0 || index >= nb_contacts){
			std::cout << "Please enter a valid index\n";
			continue ;
		}
		display_contact_info(index);
		break;
	}
}