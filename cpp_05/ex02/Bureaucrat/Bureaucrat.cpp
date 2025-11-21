/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 10:45:22 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/21 13:38:37 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "../AForm/AForm.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(150){}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name){
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
	std::cout << "Bureaucrat: " << name << " created" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade){}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other){
	if (this != &other){
		grade = other.grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat(){}

const std::string Bureaucrat::getName(void) const{
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

void Bureaucrat::increment(){
	if (this->grade <= 1){
		std::cout << "Bureaucrat " << name << " tried to increment their grade" << std::endl;
		throw GradeTooHighException();
	}
	grade--;
	std::cout << "Bureaucrat " << name << " incremented their grade" << std::endl;
}

void Bureaucrat::decrement(){
	if (this->grade >= 150){
		std::cout << "Bureaucrat " << name << " tried to decrement their grade" << std::endl;
		throw GradeTooLowException();
	}
	grade++;
	std::cout << "Bureaucrat " << name << " decremented their grade" << std::endl;
}

void Bureaucrat::signForm(AForm &aform){
	try{
		aform.beSigned(*this);
		std::cout << name << " signed " << aform.getName() << std::endl;
	}
	catch (const std::exception &e){
		std::cout << name << " couldn't sign " << aform.getName()
		<< " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const &form){
	try
	{
		form.execute(*this);
		std::cout << this->name << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Form: " << form.getName() << " can't be executed because "
		<< e.what() << std::endl;
	}
	
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &Bureaucrat){
	os << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade() << "." << std::endl;
	return os;
}