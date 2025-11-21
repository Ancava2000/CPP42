/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 13:11:01 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/21 14:21:58 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm/AForm.hpp"
#include "Bureaucrat/Bureaucrat.hpp"
#include "Intern/Intern.hpp"
#include "PresidentialPardonForm/PresidentialPardonForm.hpp"
#include "RobotomyRequestForm/RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm/ShrubberyCreationForm.hpp"

#include <ctime>

//robotomy request", "shrubbery creation", "presidential pardon"
int main(){
	try{
		srand(std::time(0));

		std::cout << "---[Creation of interns and bureaucrats]---" << std::endl;
		Intern someRandomIntern;
		Bureaucrat b1("Ana", 1);
		Bureaucrat b2("David", 150);
		AForm* rrf;
		AForm* ppf;
		AForm* scf;

		std::cout << "\n---[Forms creation]---" << std::endl;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		ppf = someRandomIntern.makeForm("presidential pardon", "Thief");
		scf = someRandomIntern.makeForm("shrubbery creation", "Tree");

		std::cout << "\n---[Sign and execute robotomy]---" << std::endl;
		b1.signForm(*rrf);
		b1.executeForm(*rrf);

		std::cout << "\n---[Sign and execute presidential]---" << std::endl;
		b1.signForm(*ppf);
		b1.executeForm(*ppf);

		std::cout << "\n---[Sign and execute shrubbery]---" << std::endl;
		b1.signForm(*scf);
		b1.executeForm(*scf);

		delete rrf;
		delete ppf;
		delete scf;
	}
	catch (std::exception &e){
		std::cout << "Exception in main: " << e.what() << std::endl;
	}
}