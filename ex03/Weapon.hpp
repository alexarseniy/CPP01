/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <olarseni@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 20:30:20 by olarseni          #+#    #+#             */
/*   Updated: 2025/11/08 20:33:28 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(void);
		Weapon(const std::string &typ);
		const std::string &getType(void);
		void setType(const std::string &type);
		~Weapon(void);
};

#endif
