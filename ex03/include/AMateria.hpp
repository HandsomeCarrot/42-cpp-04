/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:17:38 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/15 18:17:39 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class AMateria
{
private:
protected:
public:
	AMateria(void);
	//AMateria(<all parameters of class>);
	AMateria(const AMateria &other);
	~AMateria(void);

	AMateria	&operator=(const AMateria &other);
};

//std::ostream	&operator<<(std::ostream &os, const AMateria &c);

#endif /* AMATERIA_HPP */
