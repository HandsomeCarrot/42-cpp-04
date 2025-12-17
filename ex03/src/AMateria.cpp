/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:17:53 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/17 17:10:09 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

/**
 * @brief default constructor
*/
AMateria::AMateria(void) :
	type_("default materia")
{
	DEBUG_MSG("AMateria default constructor called");
}

/**
 * @brief parameterized constructor
*/
AMateria::AMateria(std::string const &type) :
	type_(type)
{
	DEBUG_MSG("AMateria parameterized constructor called");
}

/**
 * @brief copy constructor
 *
 * @param other object to copy
 */
AMateria::AMateria(AMateria const &other) :
	type_(other.getType())
{
	DEBUG_MSG("AMateria copy constructor called");
}

/**
 * @brief destructor
 */
AMateria::~AMateria(void)
{
	DEBUG_MSG("AMateria destructor called");
}

/**
 * @brief assignment operator
 * 
 * @param other object to assign from
 * 
 * @return reference to 'this' object
 *
 * @note doesn't actually do anything
 */
AMateria	&AMateria::operator=(AMateria const &other)
{
	(void)other;

	DEBUG_MSG("AMateria assignment operator called");
	return (*this);
}

/**
 * @return const reference to the 'type' string
 */
std::string const &AMateria::getType(void) const
{
	return (this->type_);
}

/** 
 * @brief prints a message
*/
void AMateria::use(ICharacter& target)
{
	(void)target;
	DEBUG_MSG("Did nothing to " << target.getName());
}

std::ostream	&operator<<(std::ostream &os, const AMateria &c)
{
	os << "'" << c.getType() << "'";
	return (os);
}
