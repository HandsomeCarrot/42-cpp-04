/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:17:40 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/17 17:07:07 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include "debug.hpp"
# include <iostream>

class Character : public ICharacter
{
protected:
	std::string name_;
	AMateria* inventory_[4];
public:
	Character(void);
	Character(std::string const &name);
	Character(const Character &other);
	~Character(void);

	Character	&operator=(const Character &other);

	std::string const &getName() const;

	void equip(AMateria* m);
	void unequip(int idx);

	void use(int idx, ICharacter& target);
};

std::ostream	&operator<<(std::ostream &os, const Character &c);

#endif /* CHARACTER_HPP */
