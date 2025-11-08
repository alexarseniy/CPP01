/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <olarseni@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 20:39:03 by olarseni          #+#    #+#             */
/*   Updated: 2025/11/08 21:07:32 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>

class HumanA
{
	private:
		std::string name;
		Weapon &weapon;
	public:
		HumanA(const std::string &name, Weapon &weapon);
		void	setWeapon(const Weapon weapon);
		void	attack(void);
		~HumanA();
};

#endif
