/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 21:33:58 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/04 01:01:11 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

/**
 * @brief default constructor
*/
Dog::Dog(void) :
	Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
}

/**
 * @brief copy constructor
 * 
 * @param other object to copy
*/
Dog::Dog(const Dog &other) :
	Animal(other)
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

void	Dog::makeSound(void) const
{
	std::cout << "Haf" << std::endl;
}
