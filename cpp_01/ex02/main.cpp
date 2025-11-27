/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 13:13:37 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/27 05:31:47 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>


int main(void){
	std::string brain = "HI THIS IS BRAIN";
	std::string* stringPTR = &brain;
	std::string& stringREF = brain;

	std::cout << "brain memory address: " << &brain << std::endl;
	std::cout << "stringPTR memory address: " << stringPTR << std::endl;
	std::cout << "stringREF memory address: " << &stringREF << std::endl;

	std::cout << "brain value: " << brain << std::endl;
	std::cout << "stringPTR value: " << *stringPTR << std::endl;
	std::cout << "stringREF value: " << stringREF << std::endl;	
}

/*
*PTR = point to the memory. It can be NULL, dereferenced and can be changed.
	has its own memory direction.
&REF =  an alias of a variable. Can't be changed or NULL. 
*/