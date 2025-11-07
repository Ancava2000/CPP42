/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 08:50:14 by acarro-v          #+#    #+#             */
/*   Updated: 2025/10/29 14:53:10 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>	// std::string

typedef std::string str;

class Contact{
	private:
		// Contact Attributes
		str first_name;
		str last_name;
		str nickname;
		str phone_number;
		str darkest_secret;

	public:
		// Setters
		void setFirstName(const str &first_name);
		void setLastName(const str &last_name);
		void setNickname(const str &nickname);
		void setPhoneNumber(const str &phone_number);
		void setDarkestSecret(const str &darkest_secret);
	
		// Getters
		str getFirstName() const;
		str getLastName() const;
		str getNickname() const;
		str getPhoneNumber() const;
		str getDarkestSecret() const;
};

#endif