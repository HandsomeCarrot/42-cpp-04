/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 21:33:43 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/04 01:04:51 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

/**
 * @brief default constructor
 */
Animal::Animal(void) :
	type("shell of the void")
{
	std::cout << "Animal default constructor called" << std::endl;
}

/**
 * @brief parameterized constructor
 */
Animal::Animal(const std::string &t) :
	type(t)
{
	std::cout << "Animal parameterized constructor called" << std::endl;
}

/**
 * @brief copy constructor
 *
 * @param other object to copy
 */
Animal::Animal(const Animal &other) :
	type(other.getType())
{
	std::cout << "Animal copy constructor called" << std::endl;
}

/**
 * @brief destructor
 */
Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

/**
 * @brief assignment operator
 *
 * @param other object to assign from
 *
 * @return reference to 'this' object
 */
Animal	&Animal::operator=(const Animal &other)
{
	if (this != &other)
		this->setType(other.getType());
	std::cout << "Animal assignment operator called" << std::endl;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::setType(const std::string t)
{
	this->type = t;
}

/**
 * @brief output stream operator
 *
 * @param os reference to the outputstream
 * @param class reference to the class object
 *
 * @return reference to the output stream
 */
std::ostream	&operator<<(std::ostream &os, const Animal &c)
{
	os << "What does the '" << c.getType() << "' say? ";
	c.makeSound();
	return (os);
}

void	Animal::makeSound(void) const
{
	std::cout << "Nothing, you hear nothing, just the voices of the void, " \
	"an absence that rings like an unbearable presence." << std::endl;
}
