/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <olarseni@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 18:01:48 by olarseni          #+#    #+#             */
/*   Updated: 2025/11/07 21:38:22 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const String name)
{
	this->name = name;
}

HumanB::HumanB(const String name, const Weapon weapon)
{
	this->name = name;
	this->weapon = weapon;
}

void	HumanB::setWeapon(const Weapon weapon)
{
	this->weapon = weapon;
}

void	HumanB::attack(void)
{
	std::cout << name << " attacks with their " << this->weapon.getType();
}

HumanB::~HumanB(void)
{
	return ;
}
