/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <olarseni@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 21:48:40 by olarseni          #+#    #+#             */
/*   Updated: 2025/10/28 23:19:19 by olarseni         ###   ########.fr       */
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
		Zombie();
		Zombie(const String name);
		void	announce(void);
		void	set_name(const String name);
		~Zombie();
};

Zombie *zombieHorde(int N, std::string name);

#endif
