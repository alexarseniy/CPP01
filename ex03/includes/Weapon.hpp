/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <olarseni@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 23:48:56 by olarseni          #+#    #+#             */
/*   Updated: 2025/10/28 23:59:20 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

typedef std::string String;

class Weapon
{
	private:
		String type;
	public:
		Weapon();
		Weapon(const String type);
		String	get_type(void);
		void	set_type(const String type);
		~Weapon();
};

#endif
