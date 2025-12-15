/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:17:47 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/15 18:17:48 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <iostream>

class IMateriaSource
{
private:
protected:
public:
	IMateriaSource(void);
	//IMateriaSource(<all parameters of class>);
	IMateriaSource(const IMateriaSource &other);
	~IMateriaSource(void);

	IMateriaSource	&operator=(const IMateriaSource &other);
};

//std::ostream	&operator<<(std::ostream &os, const IMateriaSource &c);

#endif /* IMATERIASOURCE_HPP */
