/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 10:54:30 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/21 13:33:34 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "../AForm/AForm.hpp"
#include "../RobotomyRequestForm/RobotomyRequestForm.hpp"
#include "../ShrubberyCreationForm/ShrubberyCreationForm.hpp"
#include "../PresidentialPardonForm/PresidentialPardonForm.hpp"

Intern::Intern(){
	std::cout << "Intern created" << std::endl;
}

Intern::Intern(const Intern &other){
	(void)other;
	std::cout << "Intern copied" << std::endl;
}

Intern &Intern::operator=(const Intern &other){
	(void)other;
	std::cout << "Intern assigned" << std::endl;
	return *this;
}

Intern::~Intern(){}

AForm* Intern::createrobot(std::string target){
	return new RobotomyRequestForm(target);
}

AForm* Intern::createshrubbery(std::string target){
	return new ShrubberyCreationForm(target);
}

AForm* Intern::createpresidential(std::string target){
	return new PresidentialPardonForm(target);
}

const char* Intern::IncorrectNameException::what() const throw(){
	return ("Form unknown");
}

AForm* Intern::makeForm(std::string name, std::string target){
	std::string names[3] = {"robotomy request", 
				"shrubbery creation", "presidential pardon"};

	AForm* (Intern::*fptr[3])(std::string target) = {&Intern::createrobot,  &Intern::createshrubbery,
			&Intern::createpresidential};

	for (int i = 0; i < 3; i++){
		if (name == names[i]){
			std::cout << "Intern creates " << name << std::endl;
			return (this->*fptr[i])(target);
		}
	}
	throw IncorrectNameException();
}
