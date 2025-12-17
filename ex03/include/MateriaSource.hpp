/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:17:50 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/17 16:12:51 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"
# include <iostream>

class MateriaSource : public IMateriaSource
{
protected:
	AMateria *storage_[4];
	int storage_used_;
public:
	MateriaSource(void);
	MateriaSource(const MateriaSource &other);
	~MateriaSource(void);

	MateriaSource	&operator=(const MateriaSource &other);

	void learnMateria(AMateria *m);
	AMateria* createMateria(std::string const & type);
};

#endif /* MATERIASOURCE_HPP */
