/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 21:33:56 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/03 21:33:56 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/**
 * @brief default constructor
*/
Cat::Cat(void) //std inits? :
{
	std::cout << "Cat default constructor called" << std::endl;
}

/**
 * @brief parameterized constructor
*/
/*
Cat::Cat(<all parameters of class>) :
	m_param1(param1),
	m_param2(param2),
	...
{
	std::cout << "Cat parameterized constructor called" << std::endl;
}
*/

/**
 * @brief copy constructor
 * 
 * @param other object to copy
*/
Cat::Cat(const Cat &other) :
	//m_param1(other.m_param1),
	//...
{
	std::cout << "Cat copy constructor called" << std::endl;
}

/**
 * @brief destructor
*/
Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

/**
 * @brief assignment operator
 * 
 * @param other object to assign from
 * 
 * @return reference to 'this' object
*/
Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		//m_param1 = other.m_param1;
		//setParam1(other.getParam1());
		//copy all params
	}
	std::cout << "Cat assignment operator called" << std::endl;
	return (*this);
}
