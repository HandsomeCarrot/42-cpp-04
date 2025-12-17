/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:18:02 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/17 14:11:30 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

/**
 * @brief default constructor
*/
Ice::Ice(void) :
	AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

/**
 * @brief copy constructor
 * 
 * @param other object to copy
*/
Ice::Ice(const Ice &other) :
	AMateria(other)
{
	std::cout << "Cure copy constructor called" << std::endl;
}

/**
 * @brief destructor
*/
Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
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
	std::cout << "Cure assignment operator called" << std::endl;
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
