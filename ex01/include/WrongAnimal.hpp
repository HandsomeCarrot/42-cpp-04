/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 16:07:02 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/13 12:14:40 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
protected:
	std::string	type_;
public:
	WrongAnimal(void);
	WrongAnimal(const std::string &type);
	WrongAnimal(const WrongAnimal &other);
	~WrongAnimal(void);

	WrongAnimal	&operator=(const WrongAnimal &other);

	std::string	getType(void) const;
	void		setType(const std::string type);

	void	makeSound(void) const;
};

std::ostream	&operator<<(std::ostream &os, const WrongAnimal &c);

#endif /* WRONGANIMAL_HPP */
