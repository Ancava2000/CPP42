/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 10:45:22 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/18 11:29:45 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(150){};

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade){
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade){};

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other){
	if (this != &other){
		name = other.name;
		grade = other.grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat(){};

std::string Bureaucrat::getName(void) const{
	return this->name;
}

int Bureaucrat::getGrade(void) const{
	return this->grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade is too low");
}

int Bureaucrat::increment(int grade){
	if (grade <= 1)
		throw GradeTooHighException();
	return (grade--);
}

int Bureaucrat::decrement(int grade){
	if (grade >= 150)
		throw GradeTooLowException();
	return (grade++);
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &Bureaucrat){
	os << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade() << ".";
}