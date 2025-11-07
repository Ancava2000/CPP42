/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 14:33:22 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/01 15:36:36 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon{
	private:
		std::string type;
	public:
		Weapon(std::string type);
		~Weapon(void);
		
		const std::string& getType(void) const;
		void setType(std::string type);
};

#endif