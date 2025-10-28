/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <olarseni@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 23:52:17 by olarseni          #+#    #+#             */
/*   Updated: 2025/10/28 23:59:37 by olarseni         ###   ########.fr       */
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

String Weapon::get_type(void)
{
	return (this->type);
}

void	Weapon::set_type(const String type)
{
	this->type = type;
}

Weapon::~Weapon()
{
	return ;
}
