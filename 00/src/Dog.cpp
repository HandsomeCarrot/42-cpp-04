/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 21:33:58 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/03 21:33:59 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

/**
 * @brief default constructor
*/
Dog::Dog(void) //std inits? :
{
	std::cout << "Dog default constructor called" << std::endl;
}

/**
 * @brief parameterized constructor
*/
/*
Dog::Dog(<all parameters of class>) :
	m_param1(param1),
	m_param2(param2),
	...
{
	std::cout << "Dog parameterized constructor called" << std::endl;
}
*/

/**
 * @brief copy constructor
 * 
 * @param other object to copy
*/
Dog::Dog(const Dog &other) :
	//m_param1(other.m_param1),
	//...
{
	std::cout << "Dog copy constructor called" << std::endl;
}

/**
 * @brief destructor
*/
Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
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
		//m_param1 = other.m_param1;
		//setParam1(other.getParam1());
		//copy all params
	}
	std::cout << "Dog assignment operator called" << std::endl;
	return (*this);
}
