/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:01:18 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/10 13:22:01 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal/Animal.hpp"
#include "Cat/Cat.hpp"
#include "Dog/Dog.hpp"
#include "WrongAnimal/WrongAnimal.hpp"
#include "WrongCat/WrongCat.hpp"

int main(void){

	int nb = 6;
	Animal* array[nb];

	std::cout << "--- Creating animals ---\n";
	for (int i = 0; i < nb; i++){
		if (i < nb / 2)
			array[i] = new Cat();
		else
			array[i] = new Dog();
	}
	
	std::cout << "\n--- Array contents ---\n";
	for (int i = 0; i < nb; i++)
		std::cout << "Animal in array " << i << " is type: " << array[i]->getType() << std::endl;

	std::cout << "\n--- Deleting animals ---\n";
	for (int i = 0; i < nb; i++)
		delete array[i];

	return (0);
}