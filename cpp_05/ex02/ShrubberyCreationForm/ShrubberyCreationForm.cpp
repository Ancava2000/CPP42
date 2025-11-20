/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 05:08:46 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/20 06:07:14 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "../Bureaucrat/Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("Default"){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), target(other.target){}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other){
	if (this != &other){
		AForm::operator=(other);
		target = other.target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
	if (!getIsSigned())
		throw NotSignedException();
	if (executor.getGrade() > getGradeExecute())
		throw GradeTooLowException();
	std::ofstream file;
	file.open((target + "_shrubbery").c_str());
	if (!file.is_open()){
		std::cout << "Error opening new file" << std::endl;
		return ;
	}

file << " 	oxoxoo    ooxoo\n"
 << " 	ooxoxo oo  oxoxooo\n"
 << "    oooo xxoxoo ooo ooox\n"
 << "    oxo o oxoxo  xoxxoxo\n"
 << " 	oxo xooxoooo o ooo\n"
 << " 	  ooo\\oo\\  /o/o\n"
 << " 		  \\  \\/ /\n"
 << "		   |   /\n"
 << "		   |  |\n"
 << "		   | D|\n"
 << "		   |  |\n"
 << "		   |  |\n"
 << "	______/____\\____";

 file.close();
}