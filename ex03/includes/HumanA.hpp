/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <olarseni@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 23:54:49 by olarseni          #+#    #+#             */
/*   Updated: 2025/10/29 00:03:42 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
		Weapon	weapon;
		String	name;
	public:
		HumanA();
		HumanA(const String name, const Weapon weapon);
		void	attack(void);
		~HumanA();
};

#endif
