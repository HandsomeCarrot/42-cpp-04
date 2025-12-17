/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:18:09 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/17 16:24:44 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

/**
 * @brief default constructor
*/
MateriaSource::MateriaSource(void) :
	storage_used_(0)
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->storage_[i] = NULL;
}

/**
 * @brief copy constructor
 * 
 * @param other object to copy
*/
MateriaSource::MateriaSource(const MateriaSource &other) :
	storage_used_(other.storage_used_)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (other.storage_[i])
			this->storage_[i] = other.storage_[i]->clone();
	}
}

/**
 * @brief destructor
*/
MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->storage_[i])
			delete this->storage_[i];
	}
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
	std::cout << "MateriaSource assignment operator called" << std::endl;
	if (this != &other)
	{
		this->storage_used_ = other.storage_used_;
		for (int i = 0; i < 4; i++)
		{
			if (this->storage_[i])
				delete this->storage_[i];
			if (other.storage_[i])
				this->storage_[i] = other.storage_[i]->clone();
			else
				this->storage_[i] = NULL;
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->storage_used_ < 4)
	{
		this->storage_[this->storage_used_] = m;
		storage_used_++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this->storage_used_; i++)
	{
		if (type == this->storage_[i]->getType())
			return (this->storage_[i]->clone());
	}
	return (0);
}
