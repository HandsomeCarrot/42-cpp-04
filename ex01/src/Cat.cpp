/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 21:33:56 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/14 21:10:55 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

/**
 * @brief default constructor
*/
Cat::Cat(void) :
	Animal("Cat"),
	brain_(new Brain())
{
	std::cout << "Cat default constructor called" << std::endl;
}

/**
 * @brief copy constructor
 * 
 * @param other object to copy
*/
Cat::Cat(const Cat &other) :
	Animal(other),
	brain_(new Brain(*other.brain_))
{
	std::cout << "Cat copy constructor called" << std::endl;
}

/**
 * @brief destructor
*/
Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete brain_;
}

/**
 * @brief assignment operator
 *
 * @param other object to assign from
 *
 * @return reference to 'this' object
 */
Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		*brain_ = *other.brain_;
	}
	std::cout << "Cat assignment operator called" << std::endl;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Nyanyanyanyanyanyanya!" << std::endl;
}

/**
 * @brief get brain pointer
 *
 * @return pointer to the Cat's Brain
 */
Brain	*Cat::getBrain(void) const
{
	return (this->brain_);
}
