/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <olarseni@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 21:48:40 by olarseni          #+#    #+#             */
/*   Updated: 2025/10/28 22:08:45 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

typedef std::string String;

class Zombie
{
	private:
		String	name;
	public:
		Zombie(const String name);
		void	announce(void);
		~Zombie();
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
