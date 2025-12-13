/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 21:33:56 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/13 14:42:24 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

/**
 * @brief default constructor
*/
Cat::Cat(void) :
	Animal("Cat"),
	brain_(new Brain())
{
	std::cout << "Cat default constructor called" << std::endl;
}

/**
 * @brief copy constructor
 * 
 * @param other object to copy
*/
Cat::Cat(const Cat &other) :
	Animal(other),
	brain_(other.brain_)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

/**
 * @brief destructor
*/
Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete brain_;
}

void	Cat::makeSound(void) const
{
	std::cout << "Nyanyanyanyanyanyanya!" << std::endl;
}
