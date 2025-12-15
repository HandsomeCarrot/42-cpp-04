/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 21:33:50 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/14 21:10:39 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain	*brain_;
public:
	Dog(void);
	Dog(const Dog &other);
	~Dog(void);

	Dog	&operator=(const Dog &other);

	void	makeSound(void) const;

	Brain	*getBrain(void) const;
};

#endif /* DOG_HPP */
