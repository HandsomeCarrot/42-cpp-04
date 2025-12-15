/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:17:50 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/15 18:17:52 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>

class MateriaSource
{
private:
protected:
public:
	MateriaSource(void);
	//MateriaSource(<all parameters of class>);
	MateriaSource(const MateriaSource &other);
	~MateriaSource(void);

	MateriaSource	&operator=(const MateriaSource &other);
};

//std::ostream	&operator<<(std::ostream &os, const MateriaSource &c);

#endif /* MATERIASOURCE_HPP */
