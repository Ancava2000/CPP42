/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 09:39:53 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/18 14:38:20 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string& name, int grade);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat &other);
		~Bureaucrat();

		const std::string getName(void) const;
		int getGrade(void) const;

		void increment();
		void decrement();

		class GradeTooHighException : public std::exception {
		public:
			
			const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
		public:
			const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &Bureaucrat);

#endif

/*
	The two exception classes inherit from std::exception. what() is a virtual function of the class std::exception
	that returns an error message that describes the exception. In this case, it is rewritten to show a personalized message.
	The throw() at the end means that this method doesn't throw exceptions (the method what() is called to manage an exception, it doesn't need tho throw another.
	To avoid additional errors).
*/