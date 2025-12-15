/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:18:04 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/15 18:18:05 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ICharacter.hpp"

/**
 * @brief default constructor
*/
ICharacter::ICharacter(void) //std inits? :
{
	std::cout << "ICharacter default constructor called" << std::endl;
}

/**
 * @brief parameterized constructor
*/
/*
ICharacter::ICharacter(<all parameters of class>) :
	m_param1(param1),
	m_param2(param2),
	...
{
	std::cout << "ICharacter parameterized constructor called" << std::endl;
}
*/

/**
 * @brief copy constructor
 * 
 * @param other object to copy
*/
ICharacter::ICharacter(const ICharacter &other) :
	//m_param1(other.m_param1),
	//...
{
	std::cout << "ICharacter copy constructor called" << std::endl;
}

/**
 * @brief destructor
*/
ICharacter::~ICharacter(void)
{
	std::cout << "ICharacter destructor called" << std::endl;
}

/**
 * @brief assignment operator
 * 
 * @param other object to assign from
 * 
 * @return reference to 'this' object
*/
ICharacter	&ICharacter::operator=(const ICharacter &other)
{
	if (this != &other)
	{
		//m_param1 = other.m_param1;
		//setParam1(other.getParam1());
		//copy all params
	}
	std::cout << "ICharacter assignment operator called" << std::endl;
	return (*this);
}

/** 
 * @brief output stream operator
 * 
 * @param os reference to the outputstream
 * @param class reference to the class object
 * 
 * @return reference to the output stream
*/
/*
std::ostream	&operator<<(std::ostream &os, const ICharacter &c)
{
	os << "some info about ICharacter";
	return (os);
}
*/
