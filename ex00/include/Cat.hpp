/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <vpoka@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 21:33:48 by vpoka             #+#    #+#             */
/*   Updated: 2025/12/14 14:51:24 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal
{
public:
	Cat(void);
	Cat(const Cat &other);
	~Cat(void);

	Cat	&operator=(const Cat &other);

	void	makeSound(void) const;
};

#endif /* CAT_HPP */
