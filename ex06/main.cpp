/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <olarseni@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 00:07:49 by olarseni          #+#    #+#             */
/*   Updated: 2025/11/16 14:14:37 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

#define CRED "\033[38;5;169m"
#define RESET "\033[0m"

int	main(int argc, char **argv)
{
	Harl myHarl;

	(void)argv;
	if (argc != 2)
	{
		std::cerr << CRED << "ERROR: Arguments expected 1 and provided " << argc - 1 << RESET << std::endl;
		return (1);
	}
	myHarl.complain(argv[1]);
	return (0);
}
