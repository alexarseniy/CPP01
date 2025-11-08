/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <olarseni@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 20:38:24 by olarseni          #+#    #+#             */
/*   Updated: 2025/11/08 21:13:30 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon)
	: name(name), weapon(weapon)
{}

void	HumanA::setWeapon(const Weapon weapon)
{
	this->weapon = weapon;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << this->name << " is dead... FOREVER!" << std::endl;
}
