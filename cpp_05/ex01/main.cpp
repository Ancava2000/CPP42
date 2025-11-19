/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 10:53:45 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/19 12:09:04 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat/Bureaucrat.hpp"
#include "Form/Form.hpp"

int main(){
    try{
		std::cout << "\n---[Test sign correct]--- \n";
        Bureaucrat b1("Ana", 10);
        Form f1("Driver's carnet", 50, 20);
        std::cout << b1; 
        std::cout << f1 << std::endl;
	
        b1.signForm(f1);
        std::cout << f1;
		f1.beSigned(b1);
		std::cout << "\n";

		std::cout << "---[Test sign incorrect]--- \n";
		Bureaucrat b2("David", 55);
		Form f2("Law proposition", 20, 10);
        std::cout << b2;
        std::cout << f2 << std::endl;

		b2.signForm(f2);
		std::cout << "\n";

		std::cout << "---[Test grade too high during creation]--- \n";
		Bureaucrat b3("Juan", 0);
	}
	catch (std::exception &e){
        std::cout << "Exception in main: " << e.what() << std::endl;
	}

	try{
		std::cout << "\n ---[Test grade too low during creation]--- \n";
		Form f3("Document", 151, 2);
	}
	catch (std::exception &e){
		std::cout << "Exception in main: " << e.what() << std::endl;
	}
}