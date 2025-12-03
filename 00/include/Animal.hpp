/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 21:33:46 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/04 00:37:03 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
protected:
	std::string	type;
public:
	Animal(void);
	Animal(const std::string &t);
	Animal(const Animal &other);
	~Animal(void);

	Animal	&operator=(const Animal &other);

	std::string	getType(void) const;
	void		setType(const std::string t);

	void	makeSound(void) const;
};

std::ostream	&operator<<(std::ostream &os, const Animal &c);

#endif /* ANIMAL_HPP */
