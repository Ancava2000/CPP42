/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 12:41:02 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/18 13:43:49 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
	try{
		Bureaucrat a("Ana", 0);
	}
	catch (const std::exception &e){
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try{
		Bureaucrat b("Jesus", 151);
	}
	catch (const std::exception &e){
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try{
		Bureaucrat c("David", 150);
		c.decrement();
	}
	catch (const std::exception &e){
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try{
		Bureaucrat d("María", 2);
		d.increment();
		std::cout << d << std::endl;
	}
	catch (const std::exception &e){
		std::cout << "Exception: " << e.what() << std::endl;
	}
	
	return 0;
}