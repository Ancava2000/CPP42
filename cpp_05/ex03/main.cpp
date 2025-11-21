/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 13:11:01 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/21 13:37:50 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm/AForm.hpp"
#include "Bureaucrat/Bureaucrat.hpp"
#include "Intern/Intern.hpp"
#include "PresidentialPardonForm/PresidentialPardonForm.hpp"
#include "RobotomyRequestForm/RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm/ShrubberyCreationForm.hpp"

#include <ctime>

int main(){
	try{
		srand(std::time(0));

		Intern someRandomIntern;
		Bureaucrat b1("Ana", 150);
		Bureaucrat b2("David", 1);
		AForm* rrf;
	
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		b2.signForm(*rrf);
		b1.executeForm(*rrf);

		delete rrf;
	}
	catch (std::exception &e){
		std::cout << "Exception in main: " << e.what() << std::endl;
	}
}