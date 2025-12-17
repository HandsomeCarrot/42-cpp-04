/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:18:00 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/17 14:11:43 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

/**
 * @brief default constructor
*/
Cure::Cure(void) :
	AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

/**
 * @brief copy constructor
 * 
 * @param other object to copy
*/
Cure::Cure(const Cure &other) :
	AMateria(other)
{
	std::cout << "Cure copy constructor called" << std::endl;
}

/**
 * @brief destructor
*/
Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
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
	std::cout << "Cure assignment operator called" << std::endl;
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
