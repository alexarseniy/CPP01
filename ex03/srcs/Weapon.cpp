/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <olarseni@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 23:52:17 by olarseni          #+#    #+#             */
/*   Updated: 2025/11/07 21:29:07 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	return ;
}

Weapon::Weapon(const String type)
{
	this->type = type;
}

const String Weapon::getType(void)
{
	return (this->type);
}

void	Weapon::setType(const String type)
{
	this->type = type;
}

Weapon::~Weapon()
{
	return ;
}
