/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 12:41:02 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/18 14:50:06 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
	// Creation with low grade
	try{
		Bureaucrat a("Ana", 0);
	}
	catch (const std::exception &e){
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;

	// Creation with high grade
	try{
		Bureaucrat b("Jesus", 151);
	}
	catch (const std::exception &e){
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;

	// Can't decrement
	try{
		Bureaucrat c("David", 150);
		c.decrement();
	}
	catch (const std::exception &e){
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;

	// Can increment
	try{
		Bureaucrat d("María", 2);
		d.increment();
		std::cout << d << std::endl;
	}
	catch (const std::exception &e){
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	// Copy and assignment
	try{
		Bureaucrat e("Pepa", 23);
		Bureaucrat copy(e);
		std::cout << copy << std::endl;
		Bureaucrat f("Pepe", 32);
		Bureaucrat assignment = f;
		std::cout << assignment << std::endl;
	}
	catch (const std::exception &e){
		std::cout << "Exception: " << e.what() << std::endl;
	}
	return 0;
}

/*
	- try: defines the code to test
	- throw: triggers an exception. When an error or unexpected situation occurs, the program uses the throw keyword to signal an exception.
	- catch: handles the error. The catch block contains the logic to respond to the error, allowing the program to recover or terminate gracefully.
*/