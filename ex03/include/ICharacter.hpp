/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:17:46 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/15 20:34:00 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

class ICharacter
{
public:
	virtual ~ICharacter() {}

	virtual std::string const & getName() const = 0;

	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;

	virtual void use(int idx, ICharacter& target) = 0;
};

#endif /* ICHARACTER_HPP */
