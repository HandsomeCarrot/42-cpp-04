/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:18:06 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/15 18:18:07 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/IMateriaSource.hpp"

/**
 * @brief default constructor
*/
IMateriaSource::IMateriaSource(void) //std inits? :
{
	std::cout << "IMateriaSource default constructor called" << std::endl;
}

/**
 * @brief parameterized constructor
*/
/*
IMateriaSource::IMateriaSource(<all parameters of class>) :
	m_param1(param1),
	m_param2(param2),
	...
{
	std::cout << "IMateriaSource parameterized constructor called" << std::endl;
}
*/

/**
 * @brief copy constructor
 * 
 * @param other object to copy
*/
IMateriaSource::IMateriaSource(const IMateriaSource &other) :
	//m_param1(other.m_param1),
	//...
{
	std::cout << "IMateriaSource copy constructor called" << std::endl;
}

/**
 * @brief destructor
*/
IMateriaSource::~IMateriaSource(void)
{
	std::cout << "IMateriaSource destructor called" << std::endl;
}

/**
 * @brief assignment operator
 * 
 * @param other object to assign from
 * 
 * @return reference to 'this' object
*/
IMateriaSource	&IMateriaSource::operator=(const IMateriaSource &other)
{
	if (this != &other)
	{
		//m_param1 = other.m_param1;
		//setParam1(other.getParam1());
		//copy all params
	}
	std::cout << "IMateriaSource assignment operator called" << std::endl;
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
std::ostream	&operator<<(std::ostream &os, const IMateriaSource &c)
{
	os << "some info about IMateriaSource";
	return (os);
}
*/
