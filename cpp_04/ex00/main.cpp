/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:38:05 by acarro-v          #+#    #+#             */
/*   Updated: 2025/12/16 07:01:27 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal/Animal.hpp"
#include "Cat/Cat.hpp"
#include "Dog/Dog.hpp"
#include "WrongAnimal/WrongAnimal.hpp"
#include "WrongCat/WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	// WRONGANIMAL AND WRONGCAT
	std::cout << "\n";
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << wrongCat->getType() << " " << std::endl;
	std::cout << wrongMeta->getType() << " " << std::endl;
	wrongCat->makeSound(); //will output the wronganimal sound!
	wrongMeta->makeSound();
	
	std::cout << "\n";
	delete meta;
	delete j;
	delete i;
	delete wrongMeta;
	delete wrongCat;
	return 0;
}
