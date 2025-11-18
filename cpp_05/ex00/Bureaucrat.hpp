/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 09:39:53 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/18 13:31:58 by acarro-v         ###   ########.fr       */
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
		std::string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat &other);
		~Bureaucrat();

		std::string getName(void) const;
		int getGrade(void) const;

		int increment();
		int decrement();

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