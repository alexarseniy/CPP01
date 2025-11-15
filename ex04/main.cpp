/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <olarseni@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:19:19 by olarseni          #+#    #+#             */
/*   Updated: 2025/11/15 23:04:25 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

# define OK	0
# define ERROR_ARGS 1
# define ERROR_OPEN_FILE 2
# define ERROR_INVALID_ARG 3
# define ERROR_MEM_ALLOC 4
# define CRED "\033[38;5;124m"
# define RESET "\x1b[0m"

static int check_errors(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << CRED << "ERROR: Expected 3 args and provided " << argc - 1 << " args" << RESET << std::endl;
		return (ERROR_ARGS);
	}
	if (!strncmp(argv[2], "", strlen(argv[2])))
	{
		std::cerr << CRED << "ERROR: first string cannot be void" << RESET << std::endl;
		return (ERROR_ARGS);
	}
	return (OK);
}

static std::string ft_replaceAll(char *buffer, char **argv)
{
	std::string replace, buff;
	std::size_t start = 0;
	std::size_t end = 0;

	buff = buffer; 
	while ((end = buff.find(argv[2])) != std::string::npos)
	{
		replace.append(buff.substr(0, end));
		replace.append(argv[3]);
		start = end + strlen(argv[2]);
		buff = buff.substr(start);
	}
	if (end == std::string::npos && buff.size())
		replace.append(buff);
	return (replace);
}

static int	openFile(char *f_name, std::ifstream &inFile, std::ofstream &outFile)
{
	std::string if_name;
	std::string of_name;

	if_name = f_name;
	of_name = f_name;
	of_name += ".replace";
	
	inFile.open(if_name.c_str());
	if (!inFile || !inFile.is_open())
	{
		std::cerr << CRED << "ERROR: Could not open or process the file " << if_name << RESET << std::endl;
		return (ERROR_OPEN_FILE);
	}
	outFile.open(of_name.c_str());
	if (!outFile || !outFile.is_open())
	{
		inFile.close();
		std::cerr << CRED << "ERROR: Could not open or process the file " << if_name << RESET << std::endl;
		return (ERROR_OPEN_FILE);
	}
	return (OK);
}

static char	*readFileToBuffer(std::ifstream &inFile)
{
	char	*buffer;
	int		len;

	inFile.seekg(0, inFile.end);
	len = inFile.tellg();
	inFile.seekg(0, inFile.beg);
	buffer = new char [len + 1];
	if (!buffer)
		return (NULL);
	buffer[len] = '\0';
	inFile.read(buffer, len);
	return (buffer);
}

int	main(int argc, char **argv) 
{
	std::ifstream	inFile;
	std::ofstream	outFile;
	int				error;

	if ((error = check_errors(argc, argv)))
		return (error);
	if((error = openFile(argv[1], inFile, outFile)))
		return (error);
	char * buffer = readFileToBuffer(inFile);
	if (!buffer)
	{
		std::cerr << CRED << "ERROR: Memmory allocation error" << RESET << std::endl;
		return (ERROR_MEM_ALLOC);
	}
	outFile << ft_replaceAll(buffer, argv);
	delete [] buffer;
	inFile.close();
	outFile.close();
	return (OK);
}
