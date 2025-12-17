/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:18:00 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/17 17:10:28 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

/**
 * @brief default constructor
*/
Cure::Cure(void) :
	AMateria("cure")
{
	DEBUG_MSG("Cure default constructor called");
}

/**
 * @brief copy constructor
 * 
 * @param other object to copy
*/
Cure::Cure(const Cure &other) :
	AMateria(other)
{
	DEBUG_MSG("Cure copy constructor called");
}

/**
 * @brief destructor
*/
Cure::~Cure(void)
{
	DEBUG_MSG("Cure destructor called");
}

/**
 * @brief assignment operator
 * 
 * @param other object to assign from
 * 
 * @return reference to 'this' object
*/
Cure	&Cure::operator=(const Cure &other)
{
	if (this != &other)
		AMateria::operator=(other);
	DEBUG_MSG("Cure assignment operator called");
	return (*this);
}

AMateria *Cure::clone(void) const
{
	return (new Cure());
}

/**
 * @brief prints a message
 */
void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
