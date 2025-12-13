/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 20:24:11 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/13 14:26:13 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

/**
 * @brief default constructor
*/
Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
}

/**
 * @brief copy constructor
 *
 * @param other object to copy
 */
Brain::Brain(const Brain &other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas_[i] = other.ideas_[i];
	}
}

/**
 * @brief destructor
*/
Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

/**
 * @brief assignment operator
 *
 * @param other object to assign from
 *
 * @return reference to 'this' object
 */
Brain	&Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
		{
			this->ideas_[i] = other.ideas_[i];
		}
	}
	std::cout << "Brain assignment operator called" << std::endl;
	return (*this);
}


