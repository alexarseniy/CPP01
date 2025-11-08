/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <olarseni@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:10:07 by olarseni          #+#    #+#             */
/*   Updated: 2025/11/08 20:03:20 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie::Zombie(void)
{
}

Zombie::Zombie(const std::string &name)
	: name(name)
{
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(const std::string &name)
{
	this->name = name;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " is eliminated..." << std::endl;
	return ;
}
