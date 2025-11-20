/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 05:59:32 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/20 06:04:49 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm/AForm.hpp"
#include "Bureaucrat/Bureaucrat.hpp"
#include "ShrubberyCreationForm/ShrubberyCreationForm.hpp"

int main(){
	try{
		Bureaucrat b1("Ana", 10);
		ShrubberyCreationForm shrubbery("TREE");

		shrubbery.beSigned(b1);
		shrubbery.execute(b1);
	}
	catch (const std::exception &e){
		std::cout << "AForm Error: " << e.what() << std::endl;
		return 1;
	}
}