/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 10:02:52 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/20 05:17:45 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class AForm{
	private:
		const std::string name;
		bool isSigned;
		const int grade_signed;
		const int grade_execute;
	public:
		AForm();
		AForm(const std::string &name, int grade_signed, int grade_execute);
		AForm(const AForm &other);
		AForm &operator=(const AForm &other);
		virtual ~AForm();
	
		std::string getName() const;
		bool getIsSigned() const;
		int getGradeSigned() const;
		int getGradeExecute() const;

		void beSigned(Bureaucrat &Bureaucrat);
		virtual void execute(Bureaucrat const &executor) const = 0;

		class GradeTooHighException : public std::exception {
		public:
			const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
		public:
			const char* what() const throw();
		};
		class NotSignedException : public std::exception {
		public:
			const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, const AForm &AForm);

#endif
