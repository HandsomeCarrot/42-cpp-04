/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:18:09 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/15 18:18:12 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

/**
 * @brief default constructor
*/
MateriaSource::MateriaSource(void) //std inits? :
{
	std::cout << "MateriaSource default constructor called" << std::endl;
}

/**
 * @brief parameterized constructor
*/
/*
MateriaSource::MateriaSource(<all parameters of class>) :
	m_param1(param1),
	m_param2(param2),
	...
{
	std::cout << "MateriaSource parameterized constructor called" << std::endl;
}
*/

/**
 * @brief copy constructor
 * 
 * @param other object to copy
*/
MateriaSource::MateriaSource(const MateriaSource &other) :
	//m_param1(other.m_param1),
	//...
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

/**
 * @brief destructor
*/
MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource destructor called" << std::endl;
}

/**
 * @brief assignment operator
 * 
 * @param other object to assign from
 * 
 * @return reference to 'this' object
*/
MateriaSource	&MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		//m_param1 = other.m_param1;
		//setParam1(other.getParam1());
		//copy all params
	}
	std::cout << "MateriaSource assignment operator called" << std::endl;
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
std::ostream	&operator<<(std::ostream &os, const MateriaSource &c)
{
	os << "some info about MateriaSource";
	return (os);
}
*/
