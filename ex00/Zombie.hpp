/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <olarseni@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 18:50:57 by olarseni          #+#    #+#             */
/*   Updated: 2025/11/08 19:31:28 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(const std::string &name);
		void announce(void);
		~Zombie(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
