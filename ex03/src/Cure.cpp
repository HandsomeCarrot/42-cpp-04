/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:18:00 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/15 18:18:01 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

/**
 * @brief default constructor
*/
Cure::Cure(void) //std inits? :
{
	std::cout << "Cure default constructor called" << std::endl;
}

/**
 * @brief parameterized constructor
*/
/*
Cure::Cure(<all parameters of class>) :
	m_param1(param1),
	m_param2(param2),
	...
{
	std::cout << "Cure parameterized constructor called" << std::endl;
}
*/

/**
 * @brief copy constructor
 * 
 * @param other object to copy
*/
Cure::Cure(const Cure &other) :
	//m_param1(other.m_param1),
	//...
{
	std::cout << "Cure copy constructor called" << std::endl;
}

/**
 * @brief destructor
*/
Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
}

/**
 * @brief assignment operator
 * 
 * @param other object to assign from
 * 
 * @return reference to 'this' object
*/
Cure	&Cure::operator=(const Cure &other)
{
	if (this != &other)
	{
		//m_param1 = other.m_param1;
		//setParam1(other.getParam1());
		//copy all params
	}
	std::cout << "Cure assignment operator called" << std::endl;
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
std::ostream	&operator<<(std::ostream &os, const Cure &c)
{
	os << "some info about Cure";
	return (os);
}
*/
