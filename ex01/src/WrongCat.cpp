/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 16:06:51 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/14 14:52:45 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

/**
 * @brief default constructor
*/
WrongCat::WrongCat(void) :
	WrongAnimal("Cat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

/**
 * @brief copy constructor
 * 
 * @param other object to copy
*/
WrongCat::WrongCat(const WrongCat &other) :
	WrongAnimal(other)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

/**
 * @brief destructor
*/
WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}

/**
 * @brief assignment operator
 *
 * @param other object to assign from
 *
 * @return reference to 'this' object
 */
WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		WrongAnimal::operator=(other);
	}
	std::cout << "WrongCat assignment operator called" << std::endl;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "-- . --- .--" << std::endl;
}

