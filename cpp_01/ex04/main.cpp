/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 17:33:51 by acarro-v          #+#    #+#             */
/*   Updated: 2025/11/07 16:47:12 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int proccess(std::string content, char** av){
	std::ofstream newfile;

	newfile.open((std::string(av[1]) + ".replace").c_str());
	if (!newfile.is_open()){
		std::cout << "Error opening new file" << std::endl;
		return (1);
	}

	std::size_t index = 0;
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::size_t found = content.find(s1); // Stores the first occurrence of an element
	
	while(found != std::string::npos){   // While there are occurrences
			newfile << content.substr(index, found - index);  // substr(pos, length)
			newfile << s2;
			index = found + s1.length();   // Skips the s1 word
			found = content.find(s1, index);   // Renew the index to find an ocurrence from that index.
		}
	newfile << content.substr(index);
	newfile.close();
	return (0);
}

int main(int ac, char **av){
	if (ac != 4){
		std::cout << "Indicate a filename and two strings" << std::endl;
		return (1);
	}
	std::string	line;
	std::string content;
	std::ifstream oldfile;

	oldfile.open(av[1]);
	if (!oldfile.is_open()){
		std::cout << "Error opening file" << std::endl;
		return (1);
	}
	while(std::getline(oldfile, line))
		content += line + "\n";
	if (content.empty()){
		std::cout << "Empty file\n";
		return (1);
	}
	oldfile.close();
	proccess(content, av);
	return (0);
}
