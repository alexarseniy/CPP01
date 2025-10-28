/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <olarseni@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 23:27:24 by olarseni          #+#    #+#             */
/*   Updated: 2025/10/28 23:46:05 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	str1 = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str1;
	std::string	&stringREF = str1;

	std::cout << &str1 << std::endl;
	std::cout << &stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << str1 << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}
