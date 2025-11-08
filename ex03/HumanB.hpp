/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <olarseni@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 20:39:03 by olarseni          #+#    #+#             */
/*   Updated: 2025/11/08 21:21:52 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>

class HumanB
{
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB(const std::string &name);
		void	setWeapon(Weapon &weapon);
		void	attack(void);
		~HumanB();
};

#endif
