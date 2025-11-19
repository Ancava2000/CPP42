/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 10:02:52 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/19 11:35:20 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class Form{
	private:
		const std::string name;
		bool isSigned;
		const int grade_signed;
		const int grade_execute;
	public:
		Form();
		Form(const std::string &name, int grade_signed, int grade_execute);
		Form(const Form &other);
		Form &operator=(const Form &other);
		~Form();
	
		std::string getName() const;
		bool getIsSigned() const;
		int getGradeSigned() const;
		int getGradeExecute() const;

		void beSigned(Bureaucrat &Bureaucrat);

		class GradeTooHighException : public std::exception {
		public:
			const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
		public:
			const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, const Form &Form);

#endif
