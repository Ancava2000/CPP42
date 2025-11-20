/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 10:11:52 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/20 14:14:41 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "../Bureaucrat/Bureaucrat.hpp"

AForm::AForm() : name("Default"), isSigned(false), grade_signed(50), grade_execute(20){}

AForm::AForm(const std::string &name, const int grade_signed, const int grade_execute)
: name(name), isSigned(false), grade_signed(grade_signed), grade_execute(grade_execute){
	if (grade_signed < 1 || grade_execute < 1)
		throw GradeTooHighException();
	else if (grade_signed > 150 || grade_execute > 150)
		throw GradeTooLowException();
	std::cout << "Form: " << name << " created" << std::endl;
}

AForm::AForm(const AForm &other)
: name(other.name), isSigned(other.isSigned), grade_signed(other.grade_signed), grade_execute(other.grade_execute){}

AForm &AForm::operator=(const AForm &other)
{
	if (this != &other)
		this->isSigned = other.isSigned;
	return *this;
}

AForm::~AForm() {}

std::string AForm::getName() const{
	return name;
}

bool AForm::getIsSigned() const{
	return isSigned;
}
int AForm::getGradeSigned() const{
	return grade_signed;
}
int AForm::getGradeExecute() const{
	return grade_execute;
}

const char* AForm::GradeTooHighException::what() const throw(){
	return ("Grade is too high");
}

const char* AForm::GradeTooLowException::what() const throw(){
	return ("Grade is too low");
}

const char* AForm::NotSignedException::what() const throw() {
	return ("Form is not signed");
}

void AForm::beSigned(Bureaucrat &Bureaucrat){
	if (isSigned){
		std::cout << "Form " << name << " already signed by " << Bureaucrat.getName() << std::endl;
		return;
	}
	else if (Bureaucrat.getGrade() <= grade_signed)
		this->isSigned = true;
	else
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, const AForm &AForm){
	os << "Form named " << AForm.getName() << ". Signed status: " << AForm.getIsSigned() << ". Requires a grade of level: "
	<< AForm.getGradeSigned() << " or higher to be signed and a grade of level: " << AForm.getGradeExecute() << " or higher to be executed" << std::endl;
	return os;
}