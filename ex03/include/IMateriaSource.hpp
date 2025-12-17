/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:17:47 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/17 16:12:55 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}

	virtual void learnMateria(AMateria *m) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif /* IMATERIASOURCE_HPP */
