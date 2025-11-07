/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 12:13:21 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/01 13:01:41 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <sstream>

typedef std::string str;

class Zombie{
	private:
		str	name;
	public:		
		Zombie(void);
		~Zombie(void);
		void announce(void);
		void setName(str name);
};

Zombie* zombieHorde(int N, str name);

#endif