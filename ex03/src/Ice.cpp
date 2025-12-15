/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:18:02 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/15 18:18:03 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

/**
 * @brief default constructor
*/
Ice::Ice(void) //std inits? :
{
	std::cout << "Ice default constructor called" << std::endl;
}

/**
 * @brief parameterized constructor
*/
/*
Ice::Ice(<all parameters of class>) :
	m_param1(param1),
	m_param2(param2),
	...
{
	std::cout << "Ice parameterized constructor called" << std::endl;
}
*/

/**
 * @brief copy constructor
 * 
 * @param other object to copy
*/
Ice::Ice(const Ice &other) :
	//m_param1(other.m_param1),
	//...
{
	std::cout << "Ice copy constructor called" << std::endl;
}

/**
 * @brief destructor
*/
Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
}

/**
 * @brief assignment operator
 * 
 * @param other object to assign from
 * 
 * @return reference to 'this' object
*/
Ice	&Ice::operator=(const Ice &other)
{
	if (this != &other)
	{
		//m_param1 = other.m_param1;
		//setParam1(other.getParam1());
		//copy all params
	}
	std::cout << "Ice assignment operator called" << std::endl;
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
std::ostream	&operator<<(std::ostream &os, const Ice &c)
{
	os << "some info about Ice";
	return (os);
}
*/
