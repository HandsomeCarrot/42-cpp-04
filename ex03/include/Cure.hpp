/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:17:42 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/17 17:11:16 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "debug.hpp"

class Cure : public AMateria
{
public:
	Cure(void);
	Cure(const Cure &other);
	~Cure(void);

	Cure	&operator=(const Cure &other);

	AMateria *clone(void) const;
	void use(ICharacter& target);
};

#endif /* CURE_HPP */
