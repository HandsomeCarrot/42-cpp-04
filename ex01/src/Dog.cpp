/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 21:33:58 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/14 21:10:53 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

/**
 * @brief default constructor
*/
Dog::Dog(void) :
	Animal("Dog"),
	brain_(new Brain())
{
	std::cout << "Dog default constructor called" << std::endl;
}

/**
 * @brief copy constructor
 * 
 * @param other object to copy
*/
Dog::Dog(const Dog &other) :
	Animal(other),
	brain_(new Brain(*other.brain_))
{
	std::cout << "Dog copy constructor called" << std::endl;
}

/**
 * @brief destructor
*/
Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete brain_;
}

/**
 * @brief assignment operator
 *
 * @param other object to assign from
 *
 * @return reference to 'this' object
 */
Dog	&Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		*brain_ = *other.brain_;
	}
	std::cout << "Dog assignment operator called" << std::endl;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Bork!" << std::endl;
}

/**
 * @brief get brain pointer
 *
 * @return pointer to the Dog's Brain
 */
Brain	*Dog::getBrain(void) const
{
	return (this->brain_);
}
