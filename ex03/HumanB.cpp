/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <olarseni@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 20:38:24 by olarseni          #+#    #+#             */
/*   Updated: 2025/11/08 21:23:12 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(const std::string &name)
	: name(name)
{}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

HumanB::~HumanB()
{
	std::cout << this->name << " is dead... FOREVER!" << std::endl;
}
