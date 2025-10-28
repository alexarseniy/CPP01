/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <olarseni@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 22:03:35 by olarseni          #+#    #+#             */
/*   Updated: 2025/10/28 23:19:54 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int	main(void)
{
	Zombie *horde = zombieHorde(10, "Paquito");
	for (int i = 0; i < 10; i++)
	{
		std::cout << "[" << i << "] ";
		horde[i].announce();
	}
	delete [] horde;
}
