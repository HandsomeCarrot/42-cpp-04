/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:17:53 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/15 18:17:54 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

/**
 * @brief default constructor
*/
AMateria::AMateria(void) //std inits? :
{
	std::cout << "AMateria default constructor called" << std::endl;
}

/**
 * @brief parameterized constructor
*/
/*
AMateria::AMateria(<all parameters of class>) :
	m_param1(param1),
	m_param2(param2),
	...
{
	std::cout << "AMateria parameterized constructor called" << std::endl;
}
*/

/**
 * @brief copy constructor
 * 
 * @param other object to copy
*/
AMateria::AMateria(const AMateria &other) :
	//m_param1(other.m_param1),
	//...
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
*/
AMateria	&AMateria::operator=(const AMateria &other)
{
	if (this != &other)
	{
		//m_param1 = other.m_param1;
		//setParam1(other.getParam1());
		//copy all params
	}
	std::cout << "AMateria assignment operator called" << std::endl;
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
std::ostream	&operator<<(std::ostream &os, const AMateria &c)
{
	os << "some info about AMateria";
	return (os);
}
*/
