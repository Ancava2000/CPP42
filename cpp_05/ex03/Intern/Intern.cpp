/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 10:54:30 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/21 11:09:37 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "../AForm/AForm.hpp";

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
	
}

AForm* Intern::createshrubbery(std::string target){
	
}

AForm* Intern::createpresidential(std::string target){
	
}

AForm* Intern::makeForm(std::string name, std::string target){
	std::string names[3] = {"robotomy request", 
				"shrubbery creation", "presidential pardon"};

	AForm* (Intern::*fptr[3])(std::string target) = {&Intern::createrobot,  &Intern::createshrubbery,
			&Intern::createpresidential};
}
