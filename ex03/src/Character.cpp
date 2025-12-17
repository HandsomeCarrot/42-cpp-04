/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:17:57 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/17 17:09:00 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"
#include <cstddef>

/**
 * @brief default constructor
*/
Character::Character(void) :
	name_("default name")
{
	DEBUG_MSG("Character default constructor called");
	for (int i = 0; i < 4; i++)
		this->inventory_[i] = NULL;
}

/**
 * @brief parameterized constructor
 * 
 * @param name name of the 'character'
*/
Character::Character(std::string const &name) :
	name_(name)
{
	DEBUG_MSG("Character parameterized constructor called");
	for (int i = 0; i < 4; i++)
		this->inventory_[i] = NULL;
}

/**
 * @brief copy constructor
 * 
 * @param other object to copy
*/
Character::Character(const Character &other) :
	name_(other.getName())
{
	DEBUG_MSG("Character copy constructor called");
	for (int i = 0; i < 4; i++)
	{
		if (other.inventory_[i])
			this->inventory_[i] = other.inventory_[i]->clone();
	}
}

/**
 * @brief destructor
*/
Character::~Character(void)
{
	DEBUG_MSG("Character destructor called");
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory_[i])
			delete this->inventory_[i];
	}
}

/**
 * @brief assignment operator
 * 
 * @param other object to assign from
 * 
 * @return reference to 'this' object
*/
Character	&Character::operator=(const Character &other)
{
	DEBUG_MSG("Character assignment operator called");
	if (this != &other)
	{
		this->name_ = other.getName();
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory_[i])
				delete this->inventory_[i];
			if (other.inventory_[i])
				this->inventory_[i] = other.inventory_[i]->clone();
			else
				this->inventory_[i] = NULL;
		}
	}
	return (*this);
}

std::string const &Character::getName(void) const
{
	return (this->name_);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory_[i])
		{
			this->inventory_[i] = m;
			DEBUG_MSG(*this << " equipped " << *m << " in slot " << i);
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		DEBUG_MSG(*this << " unequipped " << *this->inventory_[idx]);
		this->inventory_[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->inventory_[idx] != NULL)
		this->inventory_[idx]->use(target);
}

std::ostream	&operator<<(std::ostream &os, const Character &c)
{
	os << "'" << c.getName() << "'";
	return (os);
}
