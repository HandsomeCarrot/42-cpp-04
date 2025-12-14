/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 20:24:11 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/14 21:10:49 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

/**
 * @brief default constructor
*/
Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		std::ostringstream oss;
		oss << i;
		this->ideas_[i] = oss.str();
	}
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

/**
 * @brief get idea at specified index
 *
 * @param index index of idea to get (0-99)
 *
 * @return idea string at index, or empty string if index is out of bounds
 */
std::string	Brain::getIdea(int index) const
{
	if (index < 0 || index >= 100)
		return ("");
	return (this->ideas_[index]);
}

/**
 * @brief set idea at specified index
 *
 * @param index index of idea to set (0-99)
 * @param idea idea string to set
 */
void	Brain::setIdea(int index, const std::string &idea)
{
	if (index >= 0 && index < 100)
		this->ideas_[index] = idea;
}
