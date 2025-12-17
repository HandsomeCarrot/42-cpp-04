/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:17:53 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/17 14:36:32 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

/**
 * @brief default constructor
*/
AMateria::AMateria(void) :
	type_("default materia")
{
	std::cout << "AMateria default constructor called" << std::endl;
}

/**
 * @brief parameterized constructor
*/
AMateria::AMateria(std::string const &type) :
	type_(type)
{
	std::cout << "AMateria parameterized constructor called" << std::endl;
}

/**
 * @brief copy constructor
 *
 * @param other object to copy
 */
AMateria::AMateria(AMateria const &other) :
	type_(other.getType())
{
	std::cout << "AMateria copy constructor called" << std::endl;
}

/**
 * @brief destructor
 */
AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called" << std::endl;
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

	std::cout << "AMateria assignment operator called" << std::endl;
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
	std::cout << "Did nothing to " << target.getName() << std::endl;
}

std::ostream	&operator<<(std::ostream &os, const AMateria &c)
{
	os << "'" << c.getType() << "'";
	return (os);
}
