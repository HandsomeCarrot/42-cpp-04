/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 15:53:14 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/12 16:05:28 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

/**
 * @brief default constructor
*/
WrongAnimal::WrongAnimal(void) :
	type_("shell of the void")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

/**
 * @brief parameterized constructor
 *
 * @param type type of the object
*/
WrongAnimal::WrongAnimal(const std::string &type) :
	type_(type)
{
	std::cout << "WrongAnimal parameterized constructor called" << std::endl;
}

/**
 * @brief copy constructor
 * 
 * @param other object to copy
*/
WrongAnimal::WrongAnimal(const WrongAnimal &other) :
	type_(other.getType())
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

/**
 * @brief destructor
*/
WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

/**
 * @brief assignment operator
 * 
 * @param other object to assign from
 * 
 * @return reference to 'this' object
*/
WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
		this->setType(other.getType());
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type_);
}

void	WrongAnimal::setType(const std::string type)
{
	this->type_ = type;
}

/** 
 * @brief output stream operator
 * 
 * @param os reference to the outputstream
 * @param class reference to the class object
 * 
 * @return reference to the output stream
*/
std::ostream	&operator<<(std::ostream &os, const WrongAnimal &c)
{
	os << "What does the broken '" << c.getType() << "' say? ";
	c.makeSound();
	return (os);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "-. --- - .... .. -. --. --..-- /" \
	" -.-- --- ..- / .... . .- .-. / -. --- - .... .. -. --. --..-- /" \
	" .--- ..- ... - / - .... . / ...- --- .. -.-. . ... / --- ..-. /" \
	" - .... . / ...- --- .. -.. --..-- / .- -. / .- -... ... . -. -.-. . /" \
	" - .... .- - / .-. .. -. --. ... / .-.. .. -.- . / .- -. /" \
	" ..- -. -... . .- .-. .- -... .-.. . /" \
	" .--. .-. . ... . -. -.-. . .-.-.-" << std::endl;
}
