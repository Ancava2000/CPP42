/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 10:11:52 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/19 12:07:17 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "../Bureaucrat/Bureaucrat.hpp"

Form::Form() : name("Default"), isSigned(false), grade_signed(50), grade_execute(20){}

Form::Form(const std::string &name, const int grade_signed, const int grade_execute)
: name(name), isSigned(false), grade_signed(grade_signed), grade_execute(grade_execute){
	if (grade_signed < 1 || grade_execute < 1)
		throw GradeTooHighException();
	else if (grade_signed > 150 || grade_execute > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &other)
: name(other.name), isSigned(other.isSigned), grade_signed(other.grade_signed), grade_execute(other.grade_execute){}

Form &Form::operator=(const Form &other)
{
	if (this != &other)
		this->isSigned = other.isSigned;
	return *this;
}

Form::~Form() {}

std::string Form::getName() const{
	return name;
}

bool Form::getIsSigned() const{
	return isSigned;
}
int Form::getGradeSigned() const{
	return grade_signed;
}
int Form::getGradeExecute() const{
	return grade_execute;
}

const char* Form::GradeTooHighException::what() const throw(){
	return ("Grade is too high");
}

const char* Form::GradeTooLowException::what() const throw(){
	return ("Grade is too low");
}

void Form::beSigned(Bureaucrat &Bureaucrat){
	if (isSigned){
		std::cout << "Form " << name << " already signed by " << Bureaucrat.getName() << std::endl;
		return;
	}
	else if (Bureaucrat.getGrade() <= grade_signed)
		this->isSigned = true;
	else
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, const Form &Form){
	os << "Form named " << Form.getName() << ". Signed status: " << Form.getIsSigned() << ". Requires a grade of level: "
	<< Form.getGradeSigned() << " or higher to be signed and a grade of level: " << Form.getGradeExecute() << " or higher to be executed" << std::endl;
	return os;
}