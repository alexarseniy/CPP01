/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <olarseni@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 23:41:26 by olarseni          #+#    #+#             */
/*   Updated: 2025/11/16 14:32:54 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl(void)
{
	return ;
}

void Harl::debug(void)
{
	std::cout <<  "[ DEBUG ]" << std::endl;
	std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl<< std::endl;
}

void Harl::info(void)
{
	std::cout <<  "[ INFO ]" << std::endl;
	std::cout <<   "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<< std::endl<< std::endl;
}

void Harl::warning(void)
{
	std::cout <<  "[ WARNING ]" << std::endl;
	std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl<< std::endl;
}

void Harl::error(void)
{
	std::cout <<  "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl<< std::endl;
}

void Harl::complain(std::string level)
{
	t_funcPtr functions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	
	while (i < 4 && levels[i].compare(level))
		i++;
	switch (i)
	{
		case 0: 
			(this->*functions[0])();
		case 1: 
			(this->*functions[1])();
		case 2: 
			(this->*functions[2])();
		case 3: 
			(this->*functions[3])();
			break;
		default:
			std::cerr << "\033[38;5;169m" << "[ Probably complaining about insignificant problems ]" << "\033[0m" << std::endl;
	}
}

Harl::~Harl(void)
{
	return ;
}
