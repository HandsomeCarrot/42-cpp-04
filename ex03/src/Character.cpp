/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:17:57 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/15 18:17:59 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

/**
 * @brief default constructor
*/
Character::Character(void) //std inits? :
{
	std::cout << "Character default constructor called" << std::endl;
}

/**
 * @brief parameterized constructor
*/
/*
Character::Character(<all parameters of class>) :
	m_param1(param1),
	m_param2(param2),
	...
{
	std::cout << "Character parameterized constructor called" << std::endl;
}
*/

/**
 * @brief copy constructor
 * 
 * @param other object to copy
*/
Character::Character(const Character &other) :
	//m_param1(other.m_param1),
	//...
{
	std::cout << "Character copy constructor called" << std::endl;
}

/**
 * @brief destructor
*/
Character::~Character(void)
{
	std::cout << "Character destructor called" << std::endl;
}

/**
 * @brief assignment operator
 * 
 * @param other object to assign from
 * 
 * @return reference to 'this' object
*/
Character	&Character::operator=(const Character &other)
{
	if (this != &other)
	{
		//m_param1 = other.m_param1;
		//setParam1(other.getParam1());
		//copy all params
	}
	std::cout << "Character assignment operator called" << std::endl;
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
std::ostream	&operator<<(std::ostream &os, const Character &c)
{
	os << "some info about Character";
	return (os);
}
*/
