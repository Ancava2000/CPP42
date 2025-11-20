/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 05:59:32 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/20 14:28:37 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>

#include "AForm/AForm.hpp"
#include "Bureaucrat/Bureaucrat.hpp"
#include "ShrubberyCreationForm/ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm/RobotomyRequestForm.hpp"
#include "PresidentialPardonForm/PresidentialPardonForm.hpp"

int main(){
	
	try{
		std::cout << "-----[GOOD TESTS]-----" << std::endl;
		srand(std::time(0));
		Bureaucrat b1("Ana", 5);
	
		ShrubberyCreationForm shrubbery("Tree");
		RobotomyRequestForm robot("Robot");
		PresidentialPardonForm presi("Thief");

		std::cout << "\n-----[Shrubbery]-----" << std::endl;
		b1.signForm(shrubbery);
		b1.executeForm(shrubbery);
		std::cout << "\n-----[Robot]-----" << std::endl;
		b1.signForm(robot);
		b1.executeForm(robot);;
		std::cout << "\n-----[Presidential]-----" << std::endl;
		b1.signForm(presi);
		b1.executeForm(presi);
	
		std::cout << "\n-----[BAD TESTS]-----" << std::endl;
		Bureaucrat b2("David", 150);

		ShrubberyCreationForm bad_shrubbery("Tree");
	
		std::cout << "\n-----[Forms]-----" << std::endl;
		b2.signForm(bad_shrubbery);
		b2.executeForm(bad_shrubbery);
		b1.signForm(bad_shrubbery);
		b2.executeForm(bad_shrubbery);

		std::cout << "\n-----[Bureaucrats]-----" << std::endl;
		Bureaucrat b3("Luisa", 151);
	}
	catch (const std::exception &e){
		std::cout << "Exception: " << e.what() << std::endl;
		return 1;
	}
	return 0;
}