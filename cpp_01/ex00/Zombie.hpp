/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 08:34:22 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/01 09:05:36 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

typedef std::string str;

class Zombie{
	private:
		str	name;
	public:		
		Zombie(str name);
		~Zombie(void);
		void announce(void);
};

Zombie* newZombie(str name);
void randomChump(str name);

#endif