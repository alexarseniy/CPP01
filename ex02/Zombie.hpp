/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <olarseni@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 18:50:57 by olarseni          #+#    #+#             */
/*   Updated: 2025/11/08 20:03:04 by olarseni         ###   ########.fr       */
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
		Zombie(void);
		Zombie(const std::string &name);
		void announce(void);
		void	setName(const std::string &name);
		~Zombie(void);
};

#endif
