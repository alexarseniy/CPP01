/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <olarseni@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:19:19 by olarseni          #+#    #+#             */
/*   Updated: 2025/11/08 20:01:40 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int main(void)
{
	Zombie *horde = zombieHorde(8, "Guerrero Z");
	for (int i = 0; i < 8; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
	return 0;
}
