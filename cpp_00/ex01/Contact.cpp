/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 08:50:11 by acarro-v          #+#    #+#             */
/*   Updated: 2025/10/29 14:57:25 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// Setters
void Contact::setFirstName(const str &first_name){
	this->first_name = first_name;
}
void Contact::setLastName(const str &last_name){
	this->last_name = last_name;
}
void Contact::setNickname(const str &nickname){
	this->nickname = nickname;
}
void Contact::setPhoneNumber(const str &phone_number){
	this->phone_number = phone_number;
}
void Contact::setDarkestSecret(const str &darkest_secret){
	this->darkest_secret = darkest_secret;
}

// Getters
str Contact::getFirstName() const{
	return this->first_name;
}
str Contact::getLastName() const{
	return this->last_name;
}
str Contact::getNickname() const{
	return this->nickname;
}
str Contact::getPhoneNumber() const{
	return this->phone_number;
}
str Contact::getDarkestSecret() const{
	return this->darkest_secret;
}