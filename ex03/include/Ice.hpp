/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:17:44 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/17 12:30:41 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include <iostream>

class Ice : public AMateria
{
public:
	Ice(void);
	Ice(const Ice &other);
	~Ice(void);

	Ice	&operator=(const Ice &other);

	AMateria *clone(void) const;
	void use(ICharacter& target);
};

#endif /* ICE_HPP */
