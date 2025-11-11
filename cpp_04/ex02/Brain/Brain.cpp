/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:13:30 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/10 13:23:45 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &other){
	std::cout << "Brain copy constructor called" << std::endl;
	int i = 0;
	while (i < 100){
		this->ideas[i] = other.ideas[i];
		i++;
	}
}

Brain& Brain::operator=(const Brain &other){
	std::cout << "Brain asignment operator constructor called" << std::endl;
	if (this != &other){
		int i = 0;
		while (i < 100){
			this->ideas[i] = other.ideas[i];
			i++;
		}
	}
	return (*this);
}

Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;
}