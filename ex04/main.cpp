/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <olarseni@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:19:19 by olarseni          #+#    #+#             */
/*   Updated: 2025/11/08 21:38:53 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ios>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc < 4)
		return (1);
	std::string infile = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string outfile = infile + ".replace";

	std::ifstream inFile(argv[1]);
}
