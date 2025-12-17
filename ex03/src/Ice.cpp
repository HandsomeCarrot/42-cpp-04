/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:18:02 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/17 17:10:19 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

/**
 * @brief default constructor
*/
Ice::Ice(void) :
	AMateria("ice")
{
	DEBUG_MSG("Ice default constructor called");
}

/**
 * @brief copy constructor
 * 
 * @param other object to copy
*/
Ice::Ice(const Ice &other) :
	AMateria(other)
{
	DEBUG_MSG("Cure copy constructor called");
}

/**
 * @brief destructor
*/
Ice::~Ice(void)
{
	DEBUG_MSG("Ice destructor called");
}

/**
 * @brief assignment operator
 * 
 * @param other object to assign from
 * 
 * @return reference to 'this' object
*/
Ice	&Ice::operator=(const Ice &other)
{
	if (this != &other)
		AMateria::operator=(other);
	DEBUG_MSG("Cure assignment operator called");
	return (*this);
}

AMateria *Ice::clone(void) const
{
	return (new Ice());
}

/**
 * @brief prints a message
 */
void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
