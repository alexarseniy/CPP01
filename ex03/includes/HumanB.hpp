/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <olarseni@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 23:54:49 by olarseni          #+#    #+#             */
/*   Updated: 2025/11/07 21:39:31 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		Weapon	weapon;
		String	name;
	public:
		HumanB(const String name);
		HumanB(const String name, const Weapon weapon);
		void	setWeapon(const Weapon weapon);
		void	attack(void);
		~HumanB();
};

#endif
