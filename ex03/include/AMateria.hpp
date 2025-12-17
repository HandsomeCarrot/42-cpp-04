/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:17:38 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/16 18:07:59 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include "iostream"

class AMateria
{
protected:
	std::string type_;
public:
	AMateria(void);
	AMateria(std::string const &type);
	AMateria(AMateria const &other);
	~AMateria(void);

	AMateria	&operator=(AMateria const &other);

	std::string const &getType(void) const;

	virtual AMateria *clone(void) const = 0;
	virtual void use(ICharacter& target);
};

std::ostream	&operator<<(std::ostream &os, const AMateria &c);

#endif /* AMATERIA_HPP */
