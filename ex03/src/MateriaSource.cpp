/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:18:09 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/17 17:09:57 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

/**
 * @brief default constructor
*/
MateriaSource::MateriaSource(void) :
	storage_used_(0)
{
	DEBUG_MSG("MateriaSource default constructor called");
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
	DEBUG_MSG("MateriaSource copy constructor called");
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
	DEBUG_MSG("MateriaSource destructor called");
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
	DEBUG_MSG("MateriaSource assignment operator called");
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
