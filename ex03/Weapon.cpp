/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <olarseni@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 20:24:26 by olarseni          #+#    #+#             */
/*   Updated: 2025/11/08 20:37:26 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>
#include <iostream>

Weapon::Weapon(void)
	: type("")
{}

Weapon::Weapon(const std::string &type)
	: type(type)
{}

const std::string	&Weapon::getType(void)
{
	return (this->type);
}

void	Weapon::setType(const std::string &type)
{
	this->type = type;
}

Weapon::~Weapon(void)
{
	std::cout << "The weapon " << this->type << " is deleted :]" << std::endl;
	return ;
}
